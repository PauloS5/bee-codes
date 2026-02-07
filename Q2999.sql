WITH empregado_salario AS (
    WITH empregado_vencimento AS (
        SELECT empregado.nome, SUM(COALESCE(vencimento.valor, 0)) AS vencimento
        FROM empregado
        JOIN emp_venc
            ON empregado.matr = emp_venc.matr
        JOIN vencimento
            ON vencimento.cod_venc = emp_venc.cod_venc
        GROUP BY empregado.nome
    ),
    empregado_desconto AS (
        SELECT empregado.nome, SUM(COALESCE(desconto.valor, 0)) AS desconto
        FROM empregado
        JOIN emp_desc
            ON empregado.matr = emp_desc.matr
        JOIN desconto
            ON desconto.cod_desc = emp_desc.cod_desc
        GROUP BY empregado.nome
    )
    SELECT 
        empregado_vencimento.nome AS nome, 
        COALESCE(empregado_vencimento.vencimento, 0) - COALESCE(empregado_desconto.desconto, 0) AS salario
    FROM empregado_vencimento
    LEFT JOIN empregado_desconto
        ON empregado_vencimento.nome = empregado_desconto.nome
),
divisao_media AS (
    SELECT divisao.cod_divisao, AVG(q1.salario) AS media_salarial
    FROM (
        WITH empregado_vencimento AS (
        SELECT empregado.nome, SUM(COALESCE(vencimento.valor, 0)) AS vencimento
        FROM empregado
        JOIN emp_venc
            ON empregado.matr = emp_venc.matr
        JOIN vencimento
            ON vencimento.cod_venc = emp_venc.cod_venc
        GROUP BY empregado.nome
    ),
    empregado_desconto AS (
        SELECT empregado.nome, SUM(COALESCE(desconto.valor, 0)) AS desconto
        FROM empregado
        JOIN emp_desc
            ON empregado.matr = emp_desc.matr
        JOIN desconto
            ON desconto.cod_desc = emp_desc.cod_desc
        GROUP BY empregado.nome
    )
    SELECT 
        empregado_vencimento.nome AS nome, 
            COALESCE(empregado_vencimento.vencimento, 0) - COALESCE(empregado_desconto.desconto, 0) AS salario
        FROM empregado_vencimento
        LEFT JOIN empregado_desconto
            ON empregado_vencimento.nome = empregado_desconto.nome
    ) q1
    JOIN empregado
        ON empregado.nome = q1.nome
    JOIN divisao
        ON empregado.lotacao_div = divisao.cod_divisao
    GROUP BY divisao.cod_divisao
        HAVING AVG(q1.salario) IS NOT NULL
)
SELECT empregado.nome, ROUND(empregado_salario.salario, 2) AS salario
FROM empregado
JOIN empregado_salario
    ON empregado_salario.nome = empregado.nome
JOIN divisao_media
    ON empregado.lotacao_div = divisao_media.cod_divisao
WHERE empregado_salario.salario > 8000 AND empregado_salario.salario > divisao_media.media_salarial
ORDER BY empregado.lotacao_div