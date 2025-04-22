with xtx as (
    SELECT user_id,
           COUNT(*) AS total_confirmations,
           SUM(CASE WHEN action = 'confirmed' THEN 1 ELSE 0 END) AS confirmed_count
    FROM Confirmations
    GROUP BY user_id
), yy AS (
    SELECT 
        user_id,
        ROUND(confirmed_count / total_confirmations, 2) AS ans
    FROM xtx
)
SELECT 
    s.user_id,
    COALESCE(y.ans, 0) AS confirmation_rate
FROM Signups s
LEFT JOIN yy y ON s.user_id = y.user_id;
