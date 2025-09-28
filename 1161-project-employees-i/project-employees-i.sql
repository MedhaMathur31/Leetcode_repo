SELECT p.project_id, ROUND(AVG(e.Experience_years),2) as average_years
from Project p
join employee e
on p.employee_id = e.employee_id
group by p.project_id;