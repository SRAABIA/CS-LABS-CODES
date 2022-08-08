#include<stdio.h>
int main()
{
	float d1,d2,d3,d4,d5,t,sum,speed;

	
	printf("enter the time travelled \n\t IT HAS TO BE <=5 AND >=1");
	scanf("%f",&t);
	
	printf("enter the distance travelled first time: ");
	scanf("%f",&d1);
	
	printf("enter the distance travelled second time: ");
	scanf("%f",&d2);
	
	printf("enter the distance travelled third time: ");
	scanf("%f",&d3);
	
	printf("enter the distance travelled fourth time: ");
	scanf("%f",&d4);
	
	printf("enter the distance travelled fifth time: ");
	scanf("%f",&d5);
	
	sum = (d1+d2+d3+d4+d5);
 	speed = (sum/t);
 	printf("speed of car is %.2f", speed);
}

