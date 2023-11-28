-- c)Frame apt SQL queries and generate outputs for the following:

-- i.Show Names & Branches of all the students currently enrolled and pursuing study.
select Name, Branch from Student_details;

-- ii.Show the students' information whose name starts with the letter 'S' or ends with character 'S'
select * from Student_details
where (Name like 'S%' or Name like '%S');

-- iii.Display students' information of 'CSE' and 'MCSE' departments.
select * from Student_details
where Branch = 'CSE' or Branch = 'MCSE';

-- iv. Show the students' information of 'MCSE' department whose address is either 'Burdwan' or 'Durgapur'.
select * from Student_details
where Address = 'Burdwan' or Address = 'Durgapur';

-- v.Show the Names & Student IDs of all students who got admission on and after 17-08-2021.
select Name, Student_ID from Student_details
where Admission_Date >= '2021-08-17';

-- vi.Display the Student ID of students admitted in the year 2022.
select Student_ID from Student_details
where (Admission_Date >= '2022-01-01' and Admission_Date <= '2022-12-31');

-- vii.Show the total marks of the students whose Student ID comprises an odd number, either single digit or double digit.
select
    sd.Student_ID,
    sm.Roll_No,
    (sm.Subject_1 + sm.Subject_2 + sm.Subject_3) as Total_Marks
from
join
    Student_marks sm on sd.Roll_No = sm.Roll_No
where
    sd.Student_ID % 2 = 1;

-- viii.Show the Student IDs and Names of students who have failed in Subject 2 (marks less than 40).
select
    sd.Student_ID,
    sd.Name,
    sm.Subject_2
from
join
    Student_details sd on sm.Roll_No = sd.Roll_No
where
    sm.Subject_2 < 40;