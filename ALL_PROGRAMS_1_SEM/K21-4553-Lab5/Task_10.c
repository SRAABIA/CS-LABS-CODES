#include<stdio.h>
int main(){
	int currentcode,ans,pin,newpin;
	currentcode=1002;
	printf("\tENTER CURRENT PINCODE\t");
	scanf("%d",&ans);
	if(ans==currentcode)
			{
			printf("\tENTER NEW PINCODE\t");
			scanf("%d",&pin);
			if(currentcode!=pin)
			{
			printf("\tRE-ENTER YOUR PINCODE FOR VERIFICATION\t");
			scanf("%d",&newpin);
			if(newpin==pin)
			{printf("\tPINCODE SET SUCCESSFULLY!");}
			else 
			printf("\n\tPINCODE DOESN'T MATCH!");
			}
			else
			printf("\n\tPINCODE IS SAME AS PREVIOUS ONE. TRY ENTERING A NEW PINCODE!");
			}
			
	else printf("\n\tENTER CORRECT PINCODE!");		
}

