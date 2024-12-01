CREATE DATABASE temp;
USE temp;

CREATE TABLE course(
stu_id INT PRIMARY KEY,
course VARCHAR(50)
);
CREATE TABLE student(
stu_id INT PRIMARY KEY,
name VARCHAR(50)
);

INSERT INTO course 
(stu_id,course)
VALUES
(101,"English"),
(102,"Hindi"),
(105,"Science"),
(103,"Math");

INSERT INTO student
(stu_id,name)
VALUES
(101,"Dinesh"),
(102,"SAurabh");

DROP TABLE student;

SELECT * 
FROM student
INNER JOIN course
ON student.stu_id = course.stu_id;

SELECT * FROM student as a
LEFT JOIN course as b
ON a.stu_id=b.stu_id
UNION
SELECT *FROM student as a
RIGHT JOIN course as b
ON a.stu_id=b.stu_id;

CREATE VIEW view1 as
SELECT stu_id,course FROM course;

SELECT *FROM view1;