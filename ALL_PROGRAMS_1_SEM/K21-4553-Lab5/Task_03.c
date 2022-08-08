#include<stdio.h>
int main(){
	float sum,diff,prod;
	float num1,num2,div;
	char op;
	printf("enter number one\t");
	scanf("%f",&num1);
	printf("\nenter number two\t");
	scanf("%f",&num2);
	printf("\nenter operator\t");
	scanf(" %c",&op);
	
	switch(op)
	{
		case '+':
			sum= num1+num2; 
			printf("\tSum= %f",sum);
			break;
		
		case '-':
			diff= num1-num2;
			printf("\tDifference= %f",diff);
			break;
		
		case '*':
			prod= num1*num2;
			printf("\tProduct= %f",prod);
			break;		
		case '/':
			div= num1/num2;
			printf("\tDivision= %f",div);
			break;
		default:
			printf("\tEnter appropriate operation.");
	}
}
