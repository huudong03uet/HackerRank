/*
Enter your query here.
*/

select concat(name, "(", substr(occupation, 1, 1), ")")
from occupations
order by name asc;
select "There are a total of", count(occupation), lower(concat(occupation, "s."))
from occupations
group by occupation
order by count(occupation) asc, occupation asc;
