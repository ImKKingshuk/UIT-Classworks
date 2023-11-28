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
