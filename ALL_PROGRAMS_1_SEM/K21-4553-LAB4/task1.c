#include<stdio.h>
int main(){
	int num1, num2, sum;
	char op;
	
	printf("Enter num1, then operation, and then num2\n");
	scanf("%d %c %d",&num1,&op,&num2);
	
	if(op ="+")
	{
		int sum=num1+num2;
		printf("answer is: %i",sum);		
	}
	else{
		
	if(op ="-")
	{
		int difference=num1-num2;
		printf("answer is: %i",difference);
	}
		else{
		
	if(op ="*")
	{
		int product=num1*num2;
		printf("answer is: %i",product);
	}
			else{
			
	if(op ="/")
	{
		int quotient=num1+num2;
		printf("answer is: %",quotient);
		
	}}}}
}
