# Write your MySQL query statement below
select Department, Employee, Salary
from (
select d.name as Department,
        e.name as Employee,
       e.salary as Salary,
DENSE_RANK() OVER(
    partition by e.departmentId 
    order by e.salary DESC
) as rnk
    from Employee e
    join Department d
    on e.departmentId = d.id
)t
 where rnk <= 3
 order by Department, Salary desc;
