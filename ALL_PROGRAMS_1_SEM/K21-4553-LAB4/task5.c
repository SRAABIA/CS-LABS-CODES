#include<stdio.h>
int main(){
	printf("\n\t\t\tWe spent 3 hours on each Tuesday in CL1002 lab.\n\n");
	
/*	required
	TOTAL NUMBER OF HOURS IN 17 WEEKS
	MINUTES IN 17 WEEKS
	SECONDS IN 17 WEEKS
*/
int hours_in_one_lab = 3;
int weeks = 17;
int a,b,c;
/*number of hours in 17 weeks
hours in one week = 3
minutes in one hour = 60
seconds in one minute = 60*/
int one_minute=60;
int one_hour=60;
int hours_in_17_weeks  = a;
a= hours_in_one_lab*weeks;

int minutes_in_one_lab= hours_in_one_lab* 60;
int minutes_in_17_weeks = b;
b= minutes_in_one_lab*weeks;

int seconds_in_one_lab=hours_in_one_lab*one_minute*one_hour;
int seconds_in_17_weeks = c;
c= seconds_in_one_lab*weeks;

printf("\n\tThe HOURS in SEVENTEEN WEEKS: %d hours.\n",a);
printf("\n\tThe MINUTES in SEVENTEEN WEEKS: %d minutes.\n",b);
printf("\n\tThe SECONDS in SEVENTEEN WEEKS: %d seconds.\n",c);
//the end :)
}
