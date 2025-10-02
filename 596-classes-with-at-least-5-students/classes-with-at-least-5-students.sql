SELECT 
    class
From Courses 
Group By 
    class
Having 
    COUNT(Class) >= 5; 
  