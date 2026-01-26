SELECT COUNT(*) AS count
FROM (
    SELECT DISTINCT city 
    FROM customers
) AS sub;