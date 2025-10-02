Select
    teacher_id, COUNT(DISTINCT(Subject_id)) AS cnt
from Teacher
Group By 
    teacher_id;