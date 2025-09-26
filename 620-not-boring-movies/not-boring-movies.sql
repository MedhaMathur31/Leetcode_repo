Select *
From 
    Cinema
Where
    (id%2 != 0) and description NOT LIKE "boring"
ORDER BY 
    rating desc