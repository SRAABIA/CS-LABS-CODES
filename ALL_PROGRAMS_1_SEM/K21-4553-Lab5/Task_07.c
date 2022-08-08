#include<stdio.h>
int main(){
	char c;
	float kg1,kg2,kg3,kg4,lug;
	printf("Enter Weight of your Luggage in Kgs:\t");
	scanf("%f",&lug);
	printf("Enter your Passanger Class:\nFor Economy enter E\nFor Business enter B\nFor VIP enter V:\t");
	scanf(" %c",&c);
	
	switch(c){
		case 'E':
			if(lug<=25)
			{printf("NO CHARGE!");}
			else if(lug>25&&lug<=40)
			{ kg1= (float)(lug*1.50);
			printf("CHARGE = %f PKR",kg1);}
			else if(lug>40)
			{ kg2=(float)(lug*2.00);
			printf("CHARGE = %f PKR",kg2);
			}
			break;
		case 'B':
			if(lug<=35)
			{
			printf("No charge!");
			}else if(lug>35 && lug<=50)
			{kg3=(float)(lug*1.25);
			printf("CHARGE = %f PKR",kg3);}
			else if(lug>50)
			{kg4= (float)(lug*1.50);
			printf("CHARGE = %f PKR",kg4);}
			break;
		case 'V':
			if(lug<60)
			{printf("No Charge!");}
			else if(lug>=60)
			{
			printf("CHARGE = 30 pkr.");
			}
			break;
		default:
			printf("CHOOSE THE CLASS FROM THE GIVEN LIST");
}
}
