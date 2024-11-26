/* Write your T-SQL query statement below */

with result as (
    select e.*, dense_rank() over(partition by departmentId order by salary desc) as rnk from Employee e
) 
select d.name as Department, r.name as Employee, r.salary as Salary from result r inner join Department d on r.departmentId = d.id where r.rnk <= 3;

