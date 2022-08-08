#include<stdio.h>
int main(){
	
//have to declare things
 float taxrate;
 int percent;
 long int salary;
 long int sum;
 float tax;
 
	printf("Enter Tax Rate: ");
	scanf("%f",&taxrate);
	
	printf("Enter Salary: ");
	scanf("%ld",&salary);
	//percent is integer
	//we have to calc salary after tax deduction
	percent =100-taxrate;
	sum = percent*salary;
	tax = sum/100;
	printf("Salary after tax payment is %f",tax);
	
}
