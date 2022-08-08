#include<stdio.h>
int main(){
	
//have to declare things
 float taxrate;
 float percent;
 float salary;
 float sum;
 float tax;
 
	printf("Enter Tax Rate: ");
	scanf("%f",&taxrate);
	
	printf("Enter Salary: ");
	scanf("%f",&salary);
	//percent is integer
	//we have to calc salary after tax deduction
	percent =taxrate/100;
	tax = percent*salary;
	sum = salary-tax;
	printf("\nTax: %.3f",tax);
	printf("\nSalary after tax payment is %.3f",sum);

	
	
}
