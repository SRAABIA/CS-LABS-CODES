#include<stdio.h>
int main()
{
       int a,b,c,d,e,f,g,sum;
	//taking input of four numbers
      printf("Enter the 4-digit Number:\t");
	  scanf("%d",&a);
      b=a/1000; 
	   
      c=a%1000;
    
	  d=c/100;
    
	  e=c%100;
    
	  f=e/10;
    
	  g=e%10;
     
      sum=b+g;
      
      printf("\nSum of 1st and last Digits is : %d",sum);
      return 0;
}




