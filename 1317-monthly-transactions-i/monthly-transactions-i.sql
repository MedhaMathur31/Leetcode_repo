SELECT 
    DATE_FORMAT(trans_date, '20%y-%m') AS month,
    country,
    COUNT(*) AS trans_count ,
    SUM(case WHEN state = 'APPROVED' THEN 1 ELSE 0 END) as approved_count,
    sum(AMOUNT) as trans_total_amount,
    sum(CASE WHEN state = 'APPROVED' THEN Amount else 0 end) as approved_total_amount 

from Transactions
group by DATE_FORMAT(trans_date, '%y-%m'), country;

