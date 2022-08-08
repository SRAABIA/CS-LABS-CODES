#include<stdio.h>
int main()
{
       int l,m,n,o,p,q,r,sum;
//taking input of four digit number
       printf("enter the 4-digit num:\t");
	   scanf("%d",&l);
     
    
      m=l/1000; 
	   
      n=l%1000;
    
	  o=n/100;
    
	  p=n%100;
    
	  q=p/10;
    
	  r=p%10;
     
      sum=m+o+q+r;
      printf("\nSum of 4-Digits is : %d",sum);
      
}




