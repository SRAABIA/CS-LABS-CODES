#include<stdio.h>
int main(){
    int num,a,b,c,d,n=4,increment=0;
    printf("Enter a four digit postive integer\n");
    scanf("%d",&num);
    printf("\nEnter the last digit of your roll number\n");
    scanf("%d",&n);
    
    if(num>0&&num<=9999)
    {
    a=num%10;
    num/=10;
    b=num%10;
	num/=10;
	c=num%10;
	num/=10;
	d=num%10;
    if(a==n)
    {
    increment=increment+1;
	}
        if(b==n)
    {
		    increment=increment+1;
	}
		    
        if(c==n)
        	{
			increment=increment+1;
        	}	if(d==n)
        	{
					increment=increment+1;
			}
        printf("the number %d appears %d times",n,increment);
	}
    else
    {printf("Invalid integer! Execute program again and enter a valid integer.");}

}
