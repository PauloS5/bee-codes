SELECT amount AS most_frequent_value
FROM (
  SELECT amount, COUNT(*) AS most_frequent_value
  FROM value_table
  GROUP BY amount
  ORDER BY most_frequent_value DESC LIMIT 1
) AS joao;