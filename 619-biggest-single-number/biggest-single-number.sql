Select MAX(NUM) AS num
From 
    ( Select num
    from MyNumbers
    Group By num
    Having Count(num) = 1
    )
AS singles;