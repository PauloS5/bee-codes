WITH empregado_vencimento AS (
    SELECT empregado.nome, SUM(COALESCE(vencimento.valor, 0)) AS vencimento
    FROM empregado
    LEFT JOIN emp_venc
        ON empregado.matr = emp_venc.matr
    LEFT JOIN vencimento
        ON vencimento.cod_venc = emp_venc.cod_venc
    GROUP BY empregado.nome
),
empregado_desconto AS (
    SELECT empregado.nome, SUM(COALESCE(desconto.valor, 0)) AS desconto
    FROM empregado
    LEFT JOIN emp_desc
        ON empregado.matr = emp_desc.matr
    LEFT JOIN desconto
        ON desconto.cod_desc = emp_desc.cod_desc
    GROUP BY empregado.nome
)
SELECT
    departamento.nome AS Departamento,
    empregado.nome AS Empregado,
    COALESCE(empregado_vencimento.vencimento, 0) AS "Salario Bruto",
    COALESCE(empregado_desconto.desconto, 0) AS "Total Desconto",
    COALESCE(empregado_vencimento.vencimento, 0) - COALESCE(empregado_desconto.desconto, 0) AS "Salario Liquidoaws"
FROM empregado
JOIN empregado_vencimento
    ON empregado_vencimento.nome = empregado.nome
JOIN empregado_desconto
    ON empregado_desconto.nome = empregado.nome
JOIN departamento
    ON departamento.cod_dep = empregado.lotacao
ORDER BY "Salario Liquidoaws" DESC