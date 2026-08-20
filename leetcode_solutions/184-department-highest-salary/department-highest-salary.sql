# Write your MySQL query statement below
SELECT   d.name AS Department,
         e.name AS Employee,
        e.salary AS Salary
FROM Employee e
LEFT JOIN Department d
ON e.departmentID = d.id
WHERE e.salary = (
    SELECT MAX(salary)
    from Employee 
    where departmentId = e.departmentId
);
-- GROUP BY e.salary (Department)