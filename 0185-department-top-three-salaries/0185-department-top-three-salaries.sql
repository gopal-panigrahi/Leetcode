/* Write your T-SQL query statement below */

with t as (
    select outer_e.id, outer_e.name, outer_e.salary, outer_e.departmentId
    from Employee outer_e 
    where outer_e.salary in (select distinct top 3 salary from Employee inner_e where outer_e.departmentId = inner_e.departmentId order by salary desc)
) select d.name as Department, t.name as Employee, t.salary as Salary from t inner join Department d on t.departmentId = d.id;

