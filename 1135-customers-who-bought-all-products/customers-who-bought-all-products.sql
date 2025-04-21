# Write your MySQL query statement below
select c.customer_id 
from Customer c
join Product p ON p.product_key=c.product_key
group by c.customer_id
having count(distinct c.product_key)=(
    select count(distinct product_key)
    from Product
)
;