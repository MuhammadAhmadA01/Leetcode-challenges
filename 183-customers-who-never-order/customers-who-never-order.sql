# Write your MySQL query statement below
Select name as Customers from customers where id not in (select customerId from orders)