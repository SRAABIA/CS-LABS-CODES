#include<stdio.h>
int main(){
	int a;
	float b=0;
	printf("enter your grade in numbers:\t");
	scanf("%d",&a);
	(a!=0)?((a<0)?printf("\nThe entered number is negative"):printf("\nThe entered number is positive")):printf("\nThe number is zero");
	

}
