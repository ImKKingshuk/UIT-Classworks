-- a) Create the following tables:

-- Table Name: Student_details
create table Student_details
(
Student_ID int primary key,
Name varchar(25),
Address varchar(35),
Branch char(5) CHECK ("Branch" IN ('CSE', 'IT', 'ECE', 'AEIE', 'CE', 'EE', 'MCSE', 'MEIE')), Roll_No varchar(10) unique,
       Admission_Date date check (Admission_Date < '2023-06-01')

-- Table Name: Student_marks
create table Student_marks
(
);
)
Roll_No varchar(10) foreign key references Student_details(Roll_No),
Subject_1 int check
Subject_2 int check
Subject_3 int check
(Subject_1 >= 0 AND Subject_1 <= 100), (Subject_2 >= 0 AND Subject_2 <= 100), (Subject_3 >= 0 AND Subject_3 <= 100)