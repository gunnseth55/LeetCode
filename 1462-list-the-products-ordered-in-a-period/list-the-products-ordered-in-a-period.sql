# Write your MySQL query statement below
select p.product_name,sum(o.unit) as unit
from Products p
join Orders o On o.product_id=p.product_id
where o.order_date LIKE '%2020-02-__%' 
group by p.product_name

having sum(o.unit)>=100;