#include<stdio.h>
int main(){
	int h,i;
	char sit,lit;
	printf("How is the situation? ");
	scanf(" %c%c",&sit,&lit);
	
	if(sit=='n' && lit== 10){	//10 is ASCII value for enter.
	
			printf("#######\n");
			for(h=6 ; h>0 ; h--){
				printf("#");
		for(i=6 ; i>0; i--){
			printf("NormalSituation");
			
		} printf("#\n");
		}
		printf("#######");

	}	//	break;
			
		if(sit=='a'&& lit=='b'){
		
				printf("********\n\n");
			for(h=6 ; h>0 ; h--){
				printf("*");
		for(i=6 ; i>0; i--){
			printf("AbnormalSituation");
			
		} printf("*\n");
		}
		printf("********");

		}	//break;
			
	}

