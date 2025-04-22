# Write your MySQL query statement below
with timez as(
    select
    e1.machine_id,
    e1.process_id,
    e1.timestamp-e2.timestamp as timee
    
     from Activity e1
     join Activity e2  ON e1.process_id = e2.process_id 
       AND e1.machine_id = e2.machine_id
     where e1.activity_type='end' AND e2.activity_type='start'
    
)
select machine_id,
    round(avg(timee),3) as processing_time
    from timez
    group by machine_id
  ;
