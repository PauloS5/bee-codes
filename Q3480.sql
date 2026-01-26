SELECT 
  queue, 
  id AS "left",
  id+1 AS "right"
FROM chairs outc
WHERE
  available = TRUE
  AND (
    SELECT available 
    FROM chairs 
    WHERE outc.id+1 = id
      AND outc.queue = queue
  )