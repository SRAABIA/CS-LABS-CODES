#include<stdio.h>	
int main()
{
	int choice,tickets,juniors,sopho,sop,jun,cash,std=500,total,totals=0;
	while(choice != 3)
	{
	printf("\n\n\t=Menu Selection=\n");
	printf("=======================\n1.  Purchase Ticket\n2.  Display Information\n3.  Exit\n=======================\n\n");
	printf("Enter your choice please:");
	scanf("%d",&choice);

	switch(choice){

		case 1:			
		
		if(totals != std){
			printf("\nHow many tickets you would like to buy?");
			scanf(" %d",&tickets);

			if(tickets > std ){
			printf("\t**SORRY 500 SEATS AVAILABLE ONLY**\n");
			// return(0);
			}
			else{
					printf("\nHow many tickets for sophomores: ");
					scanf(" %d",&sopho);
					printf("\nHow many tickets for juniors: ");
					scanf(" %d",&juniors);
					total=sopho+juniors;
					
					totals=total+totals; //new for counting 
				
				if (total != tickets){
					printf("\nYour entries doesn't sum-up for the total tickets you entered.\n\tTry again.\n");
				//	return 0;
				}
				else{
					if(tickets>3)
					{
					sop=sopho*100*0.8;
					jun=juniors*50*0.8;	
					}
					else{
						sop=sopho*100;
						jun=juniors*50;
						}
						cash=sop+jun;
						printf("\nTotal amount to be paid: %d",cash);
					}
					//a=std-total;

			}
			}
			else{
				printf("\nAll tickets have been sold out!\n");
			}
				
			break;
		
		case 2:
			printf("\nThe number of seats available= %d\nTotal income= %d", std-totals, cash);
			break;
		}
	}
}