create database Employee
use registration

create table Employeee
(
Employee_Id int primary key identity(1,1),
Employee_Name varchar(50),
Employee_FName varchar(50),
Employee_Designation varchar(50),
Employee_Email varchar(50),
Emp_ID varchar(50),
Gender varchar(50),
Addrss varchar(50)
)

select * from Employeee
truncate table Employeee
insert into Employeee values('Raabia','Munir','Programmer','srhh316@gmail.com','21k-4553','Female','Pakistan')

create table LoginUsers
(
U_ID int primary key identity(1,1),
U_Name varchar(50),
U_Pass varchar(50)

)
select * from LoginUsers
insert into LoginUsers values('admin','admin')