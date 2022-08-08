#include<stdio.h>
int IterativeDecToBin(int);
int RecursiveDecToBin(int);
main(){
	int ch,dec,z=0,y=0,c;
	
    for (c=1;;c++)
    {
	printf("\nEnter the decimal number:\t");
	scanf("%d",&dec);
	printf("Press 1 for Iterative conversion\n2 for Recursive conversion of decimal to binary\nPress -1 to quit:\t");
    scanf("%d",&ch);
    if (ch == 1)
    {
    	z = IterativeDecToBin(dec);
    	printf("%d",z);
	}
	else if (ch == 2)
	{
		y = RecursiveDecToBin(dec);
		printf("%d",y);
	}
    else if (ch == -1)
    {
    	break;
	}
}
	
}
int IterativeDecToBin(int dec)
{
	int i,l=0,h=1;
	
	while(dec!=0)
	{
	    l = l + (dec%2)*h;
	    h = h * 10;
	    dec = dec/2;
		}
	return h;
	
}
int RecursiveDecToBin(int dec)
{
	if(dec==0)
	{
		return 0;
	}
	else
	{
		return(dec%2 + RecursiveDecToBin(dec/2)*10);
	}
	
}

