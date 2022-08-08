#include<stdio.h>
int main(){
	int amountoftea, cupoftea,tea, amountgiven, remainingamount,notesofhundred,amountleft;
	int notesoffifty,againleft,notesoftwenty,nowleft,notesoften,left1, notesoffive, left, notesoftwo, remains,notesofone,sum;      
	printf("Enter the number of cups of tea you want?\t");
	scanf("%d",&cupoftea);
	printf("Enter the amount of one cup of tea?\t\t");
	scanf("%d",&amountoftea);
	tea=amountoftea*cupoftea;
	printf("Please enter the amount given:\t\t\t");
	scanf("%d",&amountgiven);
	remainingamount=amountgiven-tea;
	//FINDING NOTES OF HUNDRED 
	notesofhundred=remainingamount/100;
	amountleft= remainingamount%100;
	printf("\nthe Number of 100rs Notes= %d",notesofhundred);
	//FINDINIG NOTES OF FIFTY
	{
	notesoffifty=amountleft/50;
	againleft = amountleft%50;
	printf("\nthe Number of 50rs Notes= %d",notesoffifty);
	}
	//FINDING NOTES OF TWENTY
	{ 
	notesoftwenty= againleft/20;
	nowleft = againleft %20;
	printf("\nthe Number of 20rs Notes= %d",notesoftwenty);
	}
	//FINIDING NOTES OF TEN
	{
	notesoften=nowleft/10;
	left1=nowleft%10;
	printf("\nThe Number of 10rs Notes= %d",notesoften);
	//FINDING NOTES OF FIVE
	}
	{
	notesoffive = left1/5;
	left=left1%5;
	printf("\nthe Number of 5rs Notes= %d",notesoffive);
	}
	//FINDING NOTES OF TWO
	{
	notesoftwo = left/2;
	remains= left%2;
	printf("\nthe Number of 2rs Notes= %d",notesoftwo);
	}
	//FINDING NOTES OF ONE
	
	notesofone = remains;
	printf("\nthe Number of 1rs Notes= %d",remains);
	
	sum=notesofhundred+notesoffifty+notesoftwenty+notesoften+notesoffive+notesoftwo+remains;
	printf("\n\t\tTHE TOTAL NUMBER OF NOTES WILL BE: %d",sum);
}
