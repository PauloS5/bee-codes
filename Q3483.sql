SELECT city_name, population
FROM cities
WHERE population IN (6775561, 1506420)
ORDER BY population DESC;