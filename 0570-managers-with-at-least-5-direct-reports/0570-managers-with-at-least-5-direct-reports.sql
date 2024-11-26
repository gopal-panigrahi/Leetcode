/* Write your T-SQL query statement below */
select e.name from Employee e where e.id in (
    select e.managerId from Employee e group by e.managerId having count(managerId) >= 5
);

