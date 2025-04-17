# Write your MySQL query statement below
select id
from Weather w
where temperature>(
    select w1.temperature
    from Weather w1
    where w1.recordDate =date_sub(w.recordDate,interval 1 day)
       
);