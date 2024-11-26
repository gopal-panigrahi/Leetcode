/* Write your T-SQL query statement below */
select e.name from Employee e, (
    select e.managerId from Employee e group by e.managerId having count(managerId) >= 5
) m where e.id = m.managerId;