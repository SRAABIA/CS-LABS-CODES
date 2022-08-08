#include<stdio.h>
int main(){
	int hotelstay1, stay1, mealsperday1, meals1, gas1,sum1;
	printf("\t\tFor site 1\n");
	printf("give Amount spent on Gas1:\t");
	scanf("%d",&gas1);
	printf("give Amount spent on hotel stay1 for one night:\t");
	scanf("%i",&hotelstay1),
	stay1=hotelstay1*6;
	printf("give Amount spent on meals1 for one day:\t");
	scanf("%i",&mealsperday1);
	meals1=mealsperday1*7;
	sum1=gas1+stay1+meals1;
	
	int hotelstay2, stay2, mealsperday2, meals2, gas2,sum2;
	printf("\n\t\tFor site 2\n");
	printf("\n\ngive Amount spent on Gas2:\t");
	scanf("%i",&gas2);
	printf("give Amount spent on hotel stay2 for one night1:\t");
	scanf("%i",&hotelstay2);
	stay2=hotelstay2*6;
	printf("give Amount spent on meals2 for one day1:\t");
	scanf("%i",&mealsperday2);
	meals2=mealsperday2*7;
	sum2=gas2+stay2+meals2;
	
	if(sum1>sum2&&sum2<sum1)
	printf("\nStay in site 1 which will cost you %d",sum1);
	
	if(sum2>sum1&&sum1<sum2)
	printf("\nStay in site 2 which will cost you %d",sum2);

	if(sum1==sum2)
	printf("\nBoth sites will cost you the same.");
	//The End :)
	
}
