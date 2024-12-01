CREATE DATABASE college;
USE college;

CREATE TABLE student(
RollNO INT PRIMARY KEY,
Name VARCHAR(20),
Marks INT NOT NULL,
Grade VARCHAR(1),
City VARCHAR(30)
);

INSERT INTO student
(RollNO,Name,Marks,Grade,City)
VALUES
(212,"Dinesh kushwaha",89,"A","KUSHINAGAR"),
(213,"UPASANA SHAKYA",95,"A","BEBAR"),
(215,"ARMAN ALI",80,"B","KUSHINAGAR");


SELECT * FROM student;
SELECT Name,city,Grade FROM student WHERE Marks>90;
SELECT Name FROM student WHERE Marks>80 AND city="KUSHINAGAR";
SELECT Name,City FROM student WHERE Marks BETWEEN 90 AND 100; 
SELECT Name,City FROM student WHERE City NOT IN("KUSHINAGAR","PUNE");

SELECT NAME FROM student WHERE Marks>90 LIMIT 1;

SELECT Name FROM student ORDER BY Marks DESC; 
SELECT MIN(Marks) FROM student;

SELECT City, COUNT(RollNo)
FROM student GROUP BY City;

SELECT City,AVG(Marks) FROM student 
GROUP BY City 
ORDER BY City;

SET SQL_SAFE_UPDATES=0;

UPDATE student
SET City='PUNE'
WHERE City='KUSHINAGAR';

INSERT INTO student VALUES(216,"SAURABH VERMA",87,"B","SITAPUR");

DELETE FROM student
WHERE Marks=87;

update student
set Marks=99
where Marks=89;

update student 
set Grade="O"
where Marks=99;
SELECT *FROM student; /*This is comments*/
