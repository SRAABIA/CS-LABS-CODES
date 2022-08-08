#include<stdio.h>
int count(int);
void main(){
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	printf("\nCount of 5 as digit: %d",count(num));
}

int count( int n){
	if(n==0)
		return 0;
		if(n%10 == 5)
		{
			if((n/10)%10 ==5)
				return( 2 + count(n/10));
				 
			return( 1 + count(n/10));	
		}
		else
		{
			return count(n/10);
		}
		
}
