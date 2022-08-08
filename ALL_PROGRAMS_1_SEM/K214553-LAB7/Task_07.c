#include <stdio.h>
int main(){
	int opt,i,a=0,b=0,c=0,sum=0;
	for(i=10 ; i>=1 ; i--){
		printf("\nEnter your choice[1-3]: ");
		scanf("%d",&opt);
		
		if(opt==1 || opt==3)
		{
			sum=sum+3;
		}
		else if(opt==2)
		{
			sum=sum+1;
		}
		else
		{
			printf("Error:  Wrong answer...\n");
		}
	
	}
	printf("\t\t**Total marks= %d",sum);
}
