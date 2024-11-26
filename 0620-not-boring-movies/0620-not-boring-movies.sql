/* Write your T-SQL query statement below */

select * from Cinema c where c.description not like 'boring' and c.id % 2 = 1 order by rating desc;