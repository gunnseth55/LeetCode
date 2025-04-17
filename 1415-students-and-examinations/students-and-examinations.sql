# Write your MySQL query statement below
select s.student_id,s.student_name,ss.subject_name, count(e.student_id) AS attended_exams
from Students s
join Subjects ss
left join Examinations e on e.student_id =s.student_id and ss.subject_name =e.subject_name

GROUP BY s.student_id, s.student_name, ss.subject_name
order by s.student_id , ss.subject_name;