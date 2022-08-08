#include<stdio.h>
#include<math.h>
int main()
{
int num1, num2,k;

printf("Enter the Num1 Num2:\t");
scanf("%d %d",&num1,&num2);
//GREATR THAN
k=num1>num2;
printf("num1>num2: %d\n",k);
//LESS THAN 8
k=num1<num2;
printf("num1<num2: %d\n",k);
//EQUALS TO
k=num1==num2;
printf("num1==num2: %d\n",k);
//LESS THAN AND EQUALS TO
k=num1<=num2;
printf("num1<=num2: %d",k);

}




