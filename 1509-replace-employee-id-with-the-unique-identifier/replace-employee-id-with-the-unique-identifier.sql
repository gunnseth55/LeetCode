# Write your MySQL query statement below
select b.unique_id, a.name 
from Employees a
left join EmployeeUNI b ON a.id=b.id;