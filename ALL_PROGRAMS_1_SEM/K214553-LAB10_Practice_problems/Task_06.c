#include<stdio.h>
int iterativesum(int,int);
int recursivesum(int,int);

void main(){
	int ch;
	int a,b,isum,rsum;
	printf("\tEnter the range:\nEnter the 1st element of range: ");
	scanf("%d", &a );
	printf("\nEnter the last element of range: ");
	scanf("%d",&b);
	printf("\n\tEnter your choice: \n1. iterativesum: \n2. recursivesum:");
	scanf("%d",&ch);
	switch(ch){
		case 1: 
				isum=iterativesum(a,b);
				printf("\nIterativeSum= %d",isum);
				break;
		
		case 2: 
				rsum=recursivesum(a,b);
				printf("\nRecursiveSum= %d",rsum);
				break;			
}
}

int iterativesum(int j,int k){
	int i, sum=0;
	for(i=j ; i<=k ; i++){
		sum = sum + i; 
	}
	return sum;
}


int recursivesum(int j,int k){
	int i,sum=0;
	if(j>k)
			return 0;
	else 
		return (j + recursivesum(j+1 , k));		
}
