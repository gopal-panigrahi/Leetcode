/* Write your T-SQL query statement below */
select c.name as Customers
from Customers c Left join Orders o on c.id = o.customerId
where o.id is null;
;