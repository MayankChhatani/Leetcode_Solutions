# Write your MySQL query statement below
SELECT u.unique_id,e.name
FROM  Employees e
LEFT JOIN EmployeeUNI u
ON u.id = e.id;

--  bhai left join mai from mai employee ko kyu rakha hai ?
--  UNIQUE ID hona na ho naam sare ane chaiye