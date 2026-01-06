# Write your MySQL query statement below
select customer_number
from 
(
    select 
    customer_number,
    rank() over (order by count(customer_number) desc) as ranking
    from Orders
    group by customer_number
)temp
where ranking=1;