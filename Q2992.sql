SELECT nome, divisao, ROUND(media, 2)
FROM (
    WITH divisao_media AS (
        SELECT divisao.nome, AVG(q1.salario) AS media_salarial
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
        GROUP BY divisao.nome
            HAVING AVG(q1.salario) IS NOT NULL
    )
    SELECT 
        ROW_NUMBER() OVER (
            PARTITION BY departamento.nome
            ORDER BY divisao_media.media_salarial DESC
            ROWS BETWEEN 1 PRECEDING AND CURRENT ROW
        ) rn,
        departamento.nome,
        divisao_media.nome AS divisao,
        divisao_media.media_salarial AS media
    FROM departamento
    JOIN divisao
        ON divisao.cod_dep = departamento.cod_dep
    JOIN divisao_media
        ON divisao_media.nome = divisao.nome
) q2
WHERE rn = 1
ORDER BY media DESC;