#include<stdio.h>
int main(){
	int num1, num2, modulus; //initializing four variables
	float quotient;
	printf("Enter num1: ");
	scanf("%d",&num1);
	
	printf("Enter num2: ");
	scanf("%d",&num2);
					//we have to perform increment and decrement on any number
					//taking number one
					//performing post increment 
	printf("\nPost-increment on num1: %i\n",num1++); //here the increment won't be displayed.
	printf("Pre-increment on num1: %i\n",++num1);//pre-increment: increment will be displayed.
	printf("Post-decrement on num1: %i\n",num1--);//post-decrement: the decrement won't be displayed.
	printf("Pre-decrement on num1: %i\n",--num1);//pre-decrement: decrement will be displayed.
					//Quotient is the result obtained after performing division.
	quotient=(float)num1/num2;
	printf("\nThe quotient obtained is: %0.2f \n",quotient);
					//Remainder is the amount left when one number cannot be exactly divided by another.
	modulus=num1%num2;
	printf("\nThe modulus obtained is: %d\n",modulus);
	
	//THE END :)
	}
