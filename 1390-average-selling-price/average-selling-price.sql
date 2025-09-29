Select 
p.product_id, 
ROUND(IFNULL(SUM(u.units * p.price*1.0)/SUM(u.units),0),2) as average_price
from prices p
left join UnitsSold u
    on p.product_id = u.product_id
    and u.purchase_date BETWEEN p.start_date AND p.end_date
group by p.product_id;
