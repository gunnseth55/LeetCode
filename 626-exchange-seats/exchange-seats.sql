# Write your MySQL query statement below
select *
from( select case
    when id%2=1
    then least(id+1, (select max(id) from seat))
    else id-1
    end id,student
    from seat
)s
 order by id asc;