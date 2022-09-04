/*
Enter your query here.
*/
with recursive numbers as
(
    select 20 as a
    union
    select a - 1 from numbers where a > 0
)
select repeat('* ', a) from numbers