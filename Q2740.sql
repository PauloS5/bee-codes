(SELECT ('Podium: ' || team) AS name
FROM league
ORDER BY position ASC
LIMIT 3)

UNION ALL

(SELECT ('Demoted: ' || team) FROM  (
    SELECT position, team
    FROM league
    ORDER BY position DESC
    LIMIT 2
) AS pamela ORDER BY position ASC);