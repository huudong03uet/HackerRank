select
(select max(months * salary) from employee),
count(*) from employee
where (months * salary) = (select max(months * salary) from employee);