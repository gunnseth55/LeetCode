# Write your MySQL query statement below
select customer_id, count(visit_id) AS count_no_trans
from Visits 
where
visit_id NOT IN( select visit_id from Transactions)
group by customer_id
;
