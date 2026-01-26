SELECT name 
FROM products
WHERE amount BETWEEN 10 AND 20
    AND id_providers IN (
        SELECT id 
        FROM providers 
        WHERE name LIKE 'P%'
    );