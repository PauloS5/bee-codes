SELECT
  name,
  m.matches,
  COALESCE(v.victories, 0) AS victories,
  COALESCE(d.defeats, 0) AS defeats,
  (m.matches 
  - (COALESCE(v.victories, 0) 
    + COALESCE(d.defeats, 0))
  ) AS draws,
  ((m.matches 
    - (COALESCE(v.victories, 0) 
    + COALESCE(d.defeats, 0)
  )) 
  + (COALESCE(v.victories, 0) * 3)) AS score
FROM teams t
JOIN (
  SELECT id, COUNT(*) as matches
  FROM (
    (SELECT team_1 AS id
    FROM matches) 
    UNION ALL
    (SELECT team_2 AS id
    FROM matches) 
  ) AS sq1 GROUP BY id
) m ON t.id = m.id
LEFT JOIN (
  SELECT id, COUNT(*) AS victories
  FROM (
    SELECT teams.id
    FROM teams
    JOIN matches 
      ON (matches.team_1 = teams.id
        AND matches.team_1_goals > matches.team_2_goals)
      OR (matches.team_2 = teams.id
        AND matches.team_2_goals > matches.team_1_goals)
  ) AS sq2 GROUP BY id
) v ON t.id = v.id
LEFT JOIN (
  SELECT id, COUNT(*) AS defeats
  FROM (
    SELECT teams.id
    FROM teams
    JOIN matches 
      ON (matches.team_1 = teams.id
        AND matches.team_1_goals < matches.team_2_goals)
      OR (matches.team_2 = teams.id
        AND matches.team_2_goals < matches.team_1_goals)
  ) AS sq3 GROUP BY id
) d ON t.id = d.id
ORDER BY score DESC, name ASC;