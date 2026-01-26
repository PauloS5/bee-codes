SELECT customers.name, rentals.rentals_date
FROM customers
INNER JOIN rentals 
    ON customers.id = rentals.id_customers 
        AND TO_CHAR(rentals.rentals_date, 'MM') LIKE '09';