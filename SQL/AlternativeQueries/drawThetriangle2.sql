/*
Enter your query here.
*/
with recursive draw as 
(
    select 1 as numbers
    union
    select numbers + 1 from draw where numbers <= 19
)
select repeat("* ", numbers) from draw