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
from Student_marks sm
join
    Student_details sd on sm.Roll_No = sd.Roll_No
where
    sm.Subject_2 < 40;

--ix.Show the Student IDs and Names of students who have failed in both Subject 1 & Subject 3 (marks less than 40) but have passed in Subject 2 (marks greater than or equal to 40).
select
    sd.Student_ID,
    sd.Name,
    sm.Subject_1,
    sm.Subject_2,
    sm.Subject_3
from Student_marks sm
join
    Student_details sd on sm.Roll_No = sd.Roll_No
where
    sm.Subject_1 < 40
       and
    sm.Subject_2 >= 40
       and
    sm.Subject_3 < 40;


-- x.Show the Student IDs who have failed in Subject 2 (marks less than 40) but have got highest marks either in Subject 1 or Subject 3.
select
sd.Student_ID,
Name,
Subject_1,
Subject_2,
Subject_3
from Student_details sd
join Student_marks sm on sd.Roll_No = sm.Roll_No
where sm.Subject_2 < 40
and (
    (sm.Subject_1 >= sm.Subject_3 and sm.Subject_1 >= 40)
       or
    (sm.Subject_3 > sm.Subject_1 and sm.Subject_3 >= 40)
);


-- xi.Show Student ID, Name and Percentage of marks from Student_marks table for all students.
select
    sd.Student_ID,
    sd.Name,
    (sm.Subject_1 + sm.Subject_2 + sm.Subject_3)/3 as Percentage
from Student_marks sm
join
    Student_details sd on sm.Roll_No = sd.Roll_No;

--xii.Show the students' information of all non-CSE branch students whose percentage of marks is greater than the average percentage of the CSE branch.
declare @cse_avg_per float;
select @cse_avg_per = avg((Subject_1 + Subject_2 + Subject_3) / 3)
from Student_details sd
join Student_marks sm on sd.Roll_No = sm.Roll_No
where sd.Branch = 'CSE';
select
    sd.Student_ID,
    sd.Name,
    sd.Roll_No,
    sd.Address,
    sd.Branch,
       (sm.Subject_1 + sm.Subject_2 + sm.Subject_3) / 3 as Percentage,
       @cse_avg_per as CSE_avg_per
from
Student_marks sm
 join
    Student_details sd on sm.Roll_No = sd.Roll_No
where
(sm.Subject_1 + sm.Subject_2 + sm.Subject_3) / 3 > @cse_avg_per
and
sd.Branch != 'CSE';


-- xiii.Show the Names and Roll numbers of students of all Branches who are the first ones to get enrolled on the Attendance Register.
with FirstEnrolledStudents as (
    select
Name,
Roll_No,
Branch,
row_number() over (partition by Branch order by Admission_Date) as RowNum
from
)
(sm.Subject_1 + sm.Subject_2 + sm.Subject_3) / 3 > @cse_avg_per
and
sd.Branch != 'CSE';
Student_details
select Name,
Roll_No,
Branch
from FirstEnrolledStudents
where
    RowNum = 1;


-- xiv.Show the Students' information of all Master degree students who has been studying for more than 10 months since admission.
select
    sd.Student_ID,
    sd.Name,
    sd.Address,
    sd.Branch,
    sd.Roll_No,
    sd.Admission_Date
from Student_details sd
where
    sd.Branch IN ('MCSE', 'MEIE')
    and
       datediff(month, sd.Admission_Date, getdate()) > 10;


-- xv.Show the Branch-wise list of students with their names arranged in lexicographic fashion.
select Branch, Name
from Student_details
order by Name

