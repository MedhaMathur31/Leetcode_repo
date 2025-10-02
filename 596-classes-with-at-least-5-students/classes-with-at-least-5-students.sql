Select
    class
from Courses 
Group By 
        class
Having 
    COUNT(Class) >= 5; 
  