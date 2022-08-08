#include<stdio.h>
int main(){
	int a;
	float b=0;
	printf("enter your grade in numbers:\t");
	scanf("%d",&a);
	b= (a<=100? ( (a>=50)?a:-1):-1);
	printf("%f",b);
	
}
