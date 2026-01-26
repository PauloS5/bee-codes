SELECT products.name, providers.name, categories.name
FROM products
INNER JOIN categories 
    ON products.id_categories = categories.id
    AND categories.name = 'Imported'
INNER JOIN providers 
    ON products.id_providers = providers.id
    AND providers.name = 'Sansul SA'