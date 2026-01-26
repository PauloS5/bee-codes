SELECT products.name, providers.name, products.price
FROM products
JOIN providers
    ON providers.id = products.id_providers
WHERE products.price > 1000
    AND products.id_categories = (
        SELECT id 
        FROM categories 
        WHERE name = 'Super Luxury' 
        LIMIT 1);