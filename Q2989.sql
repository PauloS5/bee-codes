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
    SELECT divisao.cod_divisao, AVG(COALESCE(q1.salario, 0)) AS media_salarial
    FROM (
        WITH empregado_vencimento AS (
            SELECT empregado.nome, SUM(COALESCE(vencimento.valor, 0)) AS vencimento
            FROM empregado
            LEFT JOIN emp_venc
                ON empregado.matr = emp_venc.matr
            LEFT JOIN vencimento
                ON vencimento.cod_venc = emp_venc.cod_venc
            -- WHERE empregado.lotacao_div = 21
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
)
SELECT 
    departamento.nome AS departamento,
    divisao.nome AS divisao,
    ROUND(divisao_media.media_salarial, 2) AS media,
    ROUND(MAX(empregado_salario.salario), 2) AS maior
FROM departamento
JOIN divisao
    ON divisao.cod_dep = departamento.cod_dep
JOIN divisao_media
    ON divisao_media.cod_divisao = divisao.cod_divisao
JOIN empregado
    ON empregado.lotacao_div = divisao.cod_divisao
JOIN empregado_salario
    ON empregado_salario.nome = empregado.nome
GROUP BY departamento.nome, divisao.nome, divisao_media.media_salarial
ORDER BY divisao_media.media_salarial DESC