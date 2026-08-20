CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      SELECT DISTINCT salary as getNthHighestSalary
      FROM Employee e1
      WHERE N-1 = (
        SELECT COUNT(DISTINCT salary)
        FROM Employee e2
        where e1.salary < e2.salary
      )
  );
END
