#include<stdio.h>
int main (){
	char ch,ch1,ch2;
	int d,a,b,c;
	printf("\nHow many characters are there in your roman number:\t");
	scanf("%d",&d);
	switch (d) {
	case 1: {
		printf("\nEnter the roman number \n");
		scanf(" %c",&ch);
	  switch(ch)

	     case 'I':
		 {
      	printf("The decimal equivelent is 1");
	     break ;
	     case 'V':
       	printf("The decimal equivelent is 5");
       	break;
         case 'X':
	     printf("The decimal equivelent is 10");
	     break;
         case 'L':
       	printf("The decimal equivelent is 50");
	     break;
          case'M':
	     printf("The decimal equivelent is 1000");
	     break;
          case 'C':
	      printf("The decimal equivelent is 100");
	      break;
         case 'D':
	     printf("The decimal equivelent is 500");
	     break;  
	     	default:
	     	printf("enter one digit right roman numeral in upper case."); }
	     break ;
		  }
	     case  (2) :
	     	printf("Enter the first character ");
			scanf(" %c",&ch1);
			printf("Enter the second character ");
			scanf(" %c",&ch2);
			{
				switch(ch1){
					case 'I':
					    a=1;
				        break;
				    case 'V':
					    a=5;
				        break;
				    case 'X':
					    a=10;
				        break;
				    case 'L':
					    a=50;
				        break;
				    case 'C':
					    a=100;
				        break;
				    case 'D':
					    a=500;
				        break;
				    case 'M':
					    a=1000;
				        break;
				}
				switch(ch2){
					case 'I':
					    b=1;
				        break;
				    case 'V':
					    b=5;
				        break;
				    case 'X':
					    b=10;
				        break;
				    case 'L':
					    b=50;
				        break;
				    case 'C':
					    b=100;
				        break;
				    case 'D':
					    b=500;
				        break;
				    case 'M':
					    b=1000;
				        break;
				    default:
					    printf("The only Roman numeral characters are I,V,X,L,C,D,M");
				}
			}
			if(a>b) {
			c=a+b;
			printf("The Decimal euivalent is %d",c); }
			else {
			c=b-a;
			printf("The Decimal equivalent is %d .",c); }
			break;
		default:
			printf("Enter only one and two Roman numerals");
	}	     	
}