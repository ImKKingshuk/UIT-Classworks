-- Create a database called COMPANY consisting of two tables - EMP & DEPT


create database COMPANY
create table EMP
 (
 EMPNO int comment 'Employee number',
 ENAME varchar comment 'Employee name',
 JOB char comment 'Designation',
 MGR int comment 'Manager Emp. number',
 HIREDATE date comment 'Date of joining',
 SAL int comment 'Basic salary',
 COMM int comment 'Commission',
 DEPTNO int comment 'Department number'
 );
create table DEPT
 (
 DEPTNO int comment 'Department number',
 DNAME varchar(10) comment 'Department name',
 LOC varchar(10) comment 'Location of department'
 );
insert into EMP
       (EMPNO, ENAME, JOB, MGR, HIREDATE, SAL, COMM, DEPTNO)
values
(7369, 'Thor', 'Clerk', 7902, '1980-12-17', 800, null, 20),
(7499, 'Captain Marvel', 'Salesman', 7698, '1981-02-20', 1600, 300, 30),
(7521, 'Scarlet Witch', 'Salesman', 7698, '1981-02-20', 1600, 300, 30),
(7566, 'Dr. Strange', 'Manager', 7839, '1981-04-02', 2975, null, 20),
(7654, 'Hulk', 'Salesman', 7698, '1981-09-28', 1250, 1400, 30),
(7657, 'Iron Man', 'Salesman', 7698, '1981-09-28', 1250, 1400, 30),


insert into DEPT
       (DEPTNO, DNAME, LOC)
  values 
    (10, 'Accounting', 'New York'),
    (20, 'Research', 'Dallas'),
    (30, 'Sales', 'Chicago'),
    (40, 'Operations', 'Boston');


-- i.List the names of analysts and salesman.
select ENAME, JOB from EMP
where JOB in ('Analyst', 'Salesman');

-- ii.List the details of employees who have joined before 30 Sep, 81.
select * from EMP
where HIREDATE < '1981-07-30';

-- iii.List names of employees who are not managers.
select ENAME, JOB from EMP
where JOB != 'Manager';

-- iv.List names of employees whose employee numbers are 7369, 7521, 7839, 7934, 7788.
select EMPNO, ENAME from EMP
where EMPNO in (7369, 7521, 7839, 7934, 7788);

-- v.List employees not belonging to department 30, 40 or 10.
select * from EMP
where DEPTNO not in (30, 40, 10);

-- vi.List employee names for those who have joined between 30 June and 31 Dec, '81.
select ENAME, HIREDATE from EMP
where HIREDATE >= '1981-06-30' AND HIREDATE <= '1981-12-31';

-- vii.List the different designations in the company.
select distinct JOB
from EMP;

-- viii.List the names of employees who are not eligible for commissions.
select ENAME from EMP
where COMM is null;

-- ix.List the name and designation of the employee who doesn't report to anybody.
select ENAME, JOB from EMP
where MGR is null;

-- x.List the employees not assigned to any department.
select EMPNO, ENAME, JOB from EMP
where DEPTNO is null;

-- xi.List the employees who are eligible for commissions.
select EMPNO, ENAME, JOB, COMM from EMP
where COMM is not null;

-- xii.List the employees whose names either start or end with 'S'.
select EMPNO, ENAME, JOB from EMP
where ENAME like 'S%' or ENAME like '%S';

-- xiii.List the employees whose names have 'i' as the second character.
select EMPNO, ENAME, JOB from EMP
where ENAME like '_i%';

