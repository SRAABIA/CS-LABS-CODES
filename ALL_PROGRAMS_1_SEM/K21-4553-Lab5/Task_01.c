#include<stdio.h>
int main(){
	int attendance,subject;
	printf("enter subject between 1000, 1002, 1003, 1004\t");
	scanf("%d",&subject);
	if (subject==1000||subject==1002||subject==1003||subject==1004)
	{
	printf("\nEnter the attendance\t");
	scanf("%d",&attendance);
	
	switch(subject){
		case 1000:
			(attendance>=80?printf("\n\tAllowed"):printf("\n\tNot allowed"));
			break;
		case 1002:
			(attendance>=80?printf("\n\tAllowed"):printf("\n\tNot allowed"));
			break;
		case 1003:
			(attendance>=80?printf("\n\tAllowed"):printf("\n\tNot allowed"));
			break;
		
		case 1004:
			(attendance>=80?printf("\n\tAllowed"):printf("\n\tNot allowed"));
			break;
			
		default:
			printf("\n\tRead the instructions carefully");
					
	}
	}
	else
	{	printf("\n\tENTER SUBJECT FROM GIVEN OPTIONS.");
	}
	

}
