# Write your MySQL query statement below
-- SELECT *
-- FROM (
    SELECT score,
    DENSE_RANK()
    OVER(ORDER BY score DESC) AS "rank"     -- rank is actually a keyword so that why " "
    from Scores
-- )t