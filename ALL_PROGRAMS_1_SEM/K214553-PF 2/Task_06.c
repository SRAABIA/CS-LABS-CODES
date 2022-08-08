#include<stdio.h>
int main(){
	int num,a,b,c,d,e,f,g,h;
	printf("\nEnter a five digit positive intger:\t");
	scanf("%d",&num);
	if(num>9999&&num<99999)
	{	
	a=num/10000;
    b=num%10000;    
    c=b/1000;
    d=b%1000;   
    e=d/100;
    f=d%100;    
    g=f/10;   
    h=f%10;
	if(a==h && c==g)
    {
	
			printf("\n\t\tIt is a palindrome.\n");
	
	}
	else{
		printf("\n\t\tIt is not a palindrome.\n");
	}
	}
	else 
	{printf("\nERROR! INVALID NUMBER.\n");
	}
	
	


	
}

