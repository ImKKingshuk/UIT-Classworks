-- c)Frame apt SQL queries and generate outputs for the following:

-- i.Show Names & Branches of all the students currently enrolled and pursuing study.
select Name, Branch from Student_details;

-- ii.Show the students' information whose name starts with the letter 'S' or ends with character 'S'
select * from Student_details
where (Name like 'S%' or Name like '%S');