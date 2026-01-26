/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
-- https://judge.beecrowd.com/pt/problems/view/2605
/*
products
providers
*/
SELECT products.name, providers.name FROM products
JOIN providers ON providers.id = products.id_providers
WHERE products.id_categories = 6; 