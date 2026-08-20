# Write your MySQL query statement below
SELECT email
FROM Person
GROUP BY EMAIL
having COUNT(email) > 1;