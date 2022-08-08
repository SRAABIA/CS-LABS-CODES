#include<stdio.h>
int mod(int,int);
void main(){
	int num1,num2,z=0;
	printf("Enter numenator:\t");
	scanf("%d",&num1);
	printf("Enter denominator:\t");
	scanf("%d",&num2);
	z = mod(num1,num2);
	printf("\nThe reminder is of %d / %d is %d",num1,num2,z);
	}
int mod(int num1,int num2)
{

	if (num1==0)
	{
		return (0);
	}
	
	if (num2==0)
	{
		return (0);
	}
	num1 = num1 - num2;
	if (num1>num2)
    {
    	return (mod(num1,num2));
	}
	else 
	{
	return num1;
	
}
}

