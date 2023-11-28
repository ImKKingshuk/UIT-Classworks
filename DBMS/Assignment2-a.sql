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
(7369, 'Smith', 'Clerk', 7902, '1980-12-17', 800, null, 20),
(7499, 'Allen', 'Salesman', 7698, '1981-02-20', 1600, 300, 30),
(7521, 'Ward', 'Salesman', 7698, '1981-02-20', 1600, 300, 30),
(7566, 'Jones', 'Manager', 7839, '1981-04-02', 2975, null, 20),
(7654, 'Martin', 'Salesman', 7698, '1981-09-28', 1250, 1400, 30),
(7689, 'Blake', 'Manager', 7839, '1981-05-01', 2850, null, 30),
(7782, 'Clark', 'Manager', 7839, '1981-06-09', 2450, null, 10),
(7788, 'Scott', 'Analyst', 7566, '1982-12-09', 3000, null, 20),
(7839, 'King', 'President', null, '1981-11-17', 5000, null, 10),
(7844, 'Turner', 'Salesman', 7698, '1981-09-08', 1500, 0, 30),
(7876, 'Adams', 'Clerk', 7788, '1983-01-12', 1100, null, 20),
(7900, 'James', 'Clerk', 7698, '1983-01-12', 1100, null, 20),
(7788, 'Scott', 'Analyst', 7566, '1981-12-03', 950, null, 30),
(7934, 'Miller', 'Clerk', 7782, '1982-01-23', 1300, null, 10);
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
