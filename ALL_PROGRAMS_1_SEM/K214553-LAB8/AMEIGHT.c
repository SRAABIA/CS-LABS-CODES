#include<stdio.h>
int main (){
	int num1[5],num2[5],x=0,i=0,m,n,count=0;
	printf("enter numbers for array 1=");
	for(i=0;i<5;i++){
		scanf("%d",&num1[i]);
	}
		printf(" \n enter numbers for array 2=");
	for(x=0;x<5;x++){
		scanf("%d",&num2[x]);
	}
	for(n=0;n<5;n++){
		for(m=0;m<5;m++){
			if (num1[n]==num2[m])
			printf("\n common %d",num1[n]);
		}
	}}
