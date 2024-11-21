/* Write your T-SQL query statement below */
select t.id as id
from Weather t, Weather y
where datediff(day, y.recordDate, t.recordDate) = 1 and t.temperature > y.temperature;