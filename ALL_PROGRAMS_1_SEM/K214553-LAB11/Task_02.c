#include<stdio.h>
int main(){
	int array[3]={1,2,3};
	int *p;
	int i;
	printf("\n\n\n");	
	for(i=0;i<3;i++){
		printf("\n\tThe value of array[%d] before incrementing: %d",i,array[i]);
	}
	printf("\n\n\t=============================================\n");
	p=array; //implicit pointer
	*p++; 	 //not array++ it is compilation error
	for(i=0;i<3;i++){
		printf("\n\tThe value of array[%d] after incrementing: %d",i,*p+i);
	}
	printf("\n\n\n");
} 
