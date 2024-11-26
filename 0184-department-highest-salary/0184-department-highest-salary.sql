/* Write your T-SQL query statement below */

with filtered_employee as (
select e.*, dense_rank() over(partition by departmentId order by salary desc) as rnk from Employee e
) 
select d.name as Department, fe.name as Employee, fe.salary as Salary from filtered_employee fe inner join Department d on fe.departmentId = d.id where fe.rnk = 1;