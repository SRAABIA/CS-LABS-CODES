#include<stdio.h>
int gcd(int,int);
void main(){
	int g, n1,n2;
	printf("enter 1st number: ");
	scanf("%d",&n1);
	printf("\nenter 2nd number: ");
	scanf("%d",&n2);
	printf("\ngcd= %d",gcd(n1,n2));
}
int gcd( int n1 , int n2){
	if(n1==n2){
		return n1;
	}
	else if(n1>n2){
		return(gcd(n1-n2,n2));
	}
	else if(n1<n2){
		return(gcd(n1,n2-n1));
	}  
}
