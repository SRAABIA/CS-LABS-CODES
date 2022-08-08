#include<stdio.h>
int main(){
	char grade,a,b,c,d,e,A,B,C,D,E;
	printf("Enter Your Grade A-E (in capital letters)\t");
	scanf("%c",&grade);
	
	switch(grade){
		case 'A':
			printf("\tYour marks range is 80-100");	
			break;
		case 'B':
			printf("\tYour marks range is 70-80");
			break;
		case 'C':
			printf("\tYour marks range is 60-70");
			break;
		case 'D':
			printf("\tYour marks range is 50-60");
			break;
		case 'E':
			printf("\tYour marks range is 40-50");
			break;
		case 'F':
			printf("\tYour marks range is between 30-40");
			break;
		default:
			printf("\tYour marks are below 30");
			
			
	}
	
	
	
}
