# Write your MySQL query statement below
select p.product_id , ifnull(round(sum(s.units*p.price)/sum(s.units),2),0) as average_price
from Prices p
left join UnitsSold s 
on s.product_id=p.product_id and s.purchase_date  between p.start_date and p.end_date
group by p.product_id;