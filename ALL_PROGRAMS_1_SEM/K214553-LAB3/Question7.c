#include<stdio.h>
int main(){
	unsigned int a;
	float b,c,d,e;
	printf("Enter the principle value \n\t value should be between rs.100 to rs. 1,000,000: ");
	scanf("%ud",&a);
	
	printf("Enter the Rate of interest \n\t value should be between 5per to 10per: ");
	scanf("%f",&b);
	
	printf("Enter the Time period \n\t between 1 to 10 years: ");
	scanf("%f",&c);
	
	d=(float)(a*b*c);
	e=(float) d/100;
	printf("the simple interest is %f",e);
	
}
	

