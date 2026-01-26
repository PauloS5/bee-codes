SELECT name, CAST(TO_CHAR(payday, 'DD') AS INTEGER)
FROM loan;