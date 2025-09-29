SELECT 
query_name, 
ROUND(AVG(rating * 1.0/position),2) as quality, 
round(SUM(CASE when rating < 3 then 1 else 0 END )*100 /count(*), 2)as poor_query_percentage
from Queries
Group by Query_name;