#include<stdio.h>
int main(){
	int n1,n2;
	printf("Enter 1st number:\t");
	scanf("%d",&n1);
	printf("\nEnter 2nd number:\t");
	scanf("%d",&n2);
	while(n1!=n2)
	{
	n1=n1/4;
	n2=n2*n2;
	printf("=====================");
	printf("\nFirst number: %d\nSecond number: %d\n",n1,n2);

	}
	
}
