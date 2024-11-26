CREATE FUNCTION getNthHighestSalary(@N INT) RETURNS INT AS
BEGIN
    RETURN (
        select top 1 salary from (
            select e.salary, dense_rank() over(order by salary desc) as rnk from Employee e
        ) as r where r.rnk = @N

    );
END