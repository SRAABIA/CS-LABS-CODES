#include<stdio.h>
int main(){
	int month;
	printf("Enter the month number:\t");
	scanf("%d",&month);
	
	if(month==12||month==1||month==2)
	{
	printf("\n\tWINTER SEASON");
	}
	else if (month==3||month==4||month==5)
	{
	printf("\n\tSPRING SEASON");
	}
	else if (month==6||month==7||month==8)
	{
	printf("\n\tSUMMER SEASON");
	}
	else if (month==9||month==10||month==11)
	{
	printf("\n\tAUTUMN SEASON");
	}
	else
	{
		printf("\nEnter Month number between 1 to 12");
	}
}
