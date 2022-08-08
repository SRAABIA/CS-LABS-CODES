#include<stdio.h>
int main(){
	int num,count=0,counter=0;
	while(num>=0)
	{
		count=0;
		printf("\n\n\tEnter number:  ");
		scanf("%d",&num);
		
		while(count<num)
		{
			printf("\n\tCL1002 exam is in week 09");
			count++;
		}
	counter=counter+count;
		if(num<0){
		 break;
		
		}
		
	}
	printf("\n\tThe message is displayed %d times\n",counter);
}
