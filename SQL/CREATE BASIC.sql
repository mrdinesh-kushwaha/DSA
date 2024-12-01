CREATE DATABASE company;
USE company;

CREATE TABLE emp(
empid INT PRIMARY KEY,
firstName VARCHAR(50),
lastName VARCHAR(40),
DeptName VARCHAR(50)
);

INSERT INTO emp 
(empid,firstName,lastName,DeptName)
VALUES
(1,"RAJ","RAO","CSE"),
(2,"RAJA","RAI","CS"),
(3,"RAJESH","RANA","CE"),
(4,"RAM","YADAV","ME"),
(5,"RAKESH","RAI","CSE"),
(6,"DINESH","KUSHWAHA","CSE"),
(7,"ARMAN","ALI","IT"),
(8,"ANURAG","YADAV","IT"),
(9,"RAJVIJAY","YADAV","CSEAI");

SELECT *FROM emp;

CREATE TABLE student(
roll INT PRIMARY KEY,
salary INT DEFAULT 25000
);
INSERT INTO student VALUES(121,40000);
INSERT INTO student (roll) VALUES(123);

SELECT *FROM student;

