SELECT name, investment, month, "return" FROM (
    WITH months AS (
        SELECT 
            client_id, month, 
            SUM(profit) OVER (
                PARTITION BY client_id
                ORDER BY client_id
                ROWS BETWEEN 
                    UNBOUNDED PRECEDING 
                    AND CURRENT ROW
            ) AS ttl_by_month
        FROM operations
        WHERE client_id IN (
            WITH client_ttl AS (
                SELECT client_id, SUM(profit) AS ttl
                FROM operations
                GROUP BY client_id
            )
            SELECT clients.id
            FROM clients
            JOIN client_ttl
                ON client_ttl.client_id = clients.id
                AND client_ttl.ttl >= clients.investment
        )
    )
    SELECT 
        clients.name, 
        clients.investment, 
        months.month, 
        MIN(months.ttl_by_month) - clients.investment AS "return", 
        ROW_NUMBER() OVER (
            PARTITION BY clients.id
            ORDER BY clients.name
        ) AS rn
    FROM months
    JOIN clients 
        ON clients.id = months.client_id
    WHERE months.ttl_by_month >= clients.investment
    GROUP BY clients.name, clients.investment, months.month, clients.id
) q1
WHERE rn = 1
ORDER BY "return" DESC;