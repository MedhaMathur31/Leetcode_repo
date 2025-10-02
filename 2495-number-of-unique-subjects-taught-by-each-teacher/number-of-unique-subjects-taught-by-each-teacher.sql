select teacher_id, COUNT(DISTINCT(Subject_id)) AS cnt
from Teacher
group by teacher_id;