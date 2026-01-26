-- DROP TABLE packages;
-- DROP TABLE users;

SELECT 
	packages."year",
	sender."name",
	receiver."name"
FROM packages
JOIN users sender
	ON sender.id = packages.id_user_sender
JOIN users receiver
	ON receiver.id = packages.id_user_receiver
WHERE
	(packages.color = 'blue'
	OR packages."year" = 2015)
	AND 'Taiwan' NOT IN (sender.address, receiver.address)
ORDER BY packages."year" DESC