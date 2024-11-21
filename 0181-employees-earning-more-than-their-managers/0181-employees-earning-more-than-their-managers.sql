/* Write your T-SQL query statement below */
-- Select e1.name as Employee from Employee e1 Inner join Employee e2 on e1.managerId = e2.id where e1.salary > e2.salary;

Select e1.name as Employee from Employee e1, Employee e2 where e1.managerId = e2.id and e1.salary > e2.salary;