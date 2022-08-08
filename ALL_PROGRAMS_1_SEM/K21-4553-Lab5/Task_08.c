#include<stdio.h>
int main(){
	int p,q,m,c;
	char choice;
	
	printf("Enter your choice (q for quantity or c for cash):\t");
	scanf("%c",&choice);
	switch(choice)
	{
	case'q':
			printf("Enter the quantity: ");
			scanf("%d", &q);
		float pt,dt;
		if(q<50)
		{pt=35*q;
		dt=38*q;
		}
		else if(q>=50&&q<155){
			pt = (35*q) - (35 * q * 0.085);
			dt = (38*q) - (38 * q * 0.085);
		}
		else if(q>=155){
			pt = (35 * q) - (35 * q * 0.25);
			    dt = (38* q) - (38 * q * 0.25);
		}
		printf("You have to pay %f PkR. for pepsi \n", pt);
		printf("You have to pay %f PkR. for dew \n", dt);
		break;
	case'c':
		printf("Enter the cash amount: ");
		scanf("%d", &c);
		int pQ, dQ;
		 if(c<2000){
			pQ = c/35;
			dQ = c/38;
		}
		else if(c>=2000 && c<4500){
			pQ = (c - (c*0.085)) / 35;
			dQ = (c - (c*0.085)) / 38;	
		}
		else if(c>=4500){
			pQ= (c - (c*0.25)) / 35;
			dQ = (c - (c*0.25)) / 38;
		}
		printf("\nYou can buy %d pepsi bottles \n", pQ);
		printf("You can buy %d dew bottles \n", dQ);
		break;
		default:
			printf("Please choose from the given options.");
		
		
	}
	
}
