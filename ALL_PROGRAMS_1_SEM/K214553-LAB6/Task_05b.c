#include<stdio.h>
int main()				//using nested if-else.
{
	int grade;
	printf("\ninput number:\t");
	scanf("%d", &grade);
	if(grade<=100)
	{
		if(grade>=75){
			printf("\n\tA\n");
		}
		else if(grade<75)
		{
			if(grade>=50)
			{
				printf("\n\tB\n");
			}
			else if(grade<50)
			{
				if(grade>=0)
				{
				printf("\n\tFAIL\n");
				}
				else
				{
					printf("\n\tEnter marks in range of 0-100\n");
				}
			}	
		}	
	}
}

