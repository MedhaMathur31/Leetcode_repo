Select 
    s.product_id,
    m.first_year,
    s.quantity ,
    s.price 
From Sales s  
Join( 
    Select product_id, MIN(year) as first_year
    from Sales
    Group By product_id
)  m
ON s.product_id = m.product_id
AND s.year = m.first_year;
