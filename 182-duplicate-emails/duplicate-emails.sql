# Write your MySQL query statement below
SELECT email as EMAIL
FROM Person 
GROUP BY email
having COUNT(email)>1