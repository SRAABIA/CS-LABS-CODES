#include<stdio.h>
int main(){
	int day,fine,fee;
	printf("Enter the Fee amount:\t");
	scanf("%d",&fee);
	printf("Enter days you are late:\t");
	scanf("%d",&day);
	if(day<=7)
	{fine=500;
	fee=fee+fine;
	printf("\nYour Fee with Fine will be:\t%d rs.",fee);}
	else if( day>7 && day<=14)
	{fine=500*2;
	fee=fee+fine;
	printf("\nYour Fine will be:\t%d rs.",fee);}
	else {
	fine=500*3;
	fee=fee+fine;
	printf("\nYour Fine will be:\t%d rs.",fee);}
}	 
