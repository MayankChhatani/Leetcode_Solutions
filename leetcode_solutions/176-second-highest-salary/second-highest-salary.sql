# Write your MySQL query statement below
SELECT max(salary) as SecondHighestSalary
from Employee
where Salary < (
    SELECT MAX(salary)
    from Employee
);