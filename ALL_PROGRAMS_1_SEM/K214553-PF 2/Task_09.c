#include<stdio.h>
int main(){
	int rn,decimalnum,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	printf("\tEnter last two digits of your roll number:\t");
	scanf("%d",&rn);
	if(rn>=10 && rn<=99)
	{
		 a=rn/2;
		 b=rn%2;
		 c=a/2;
		 d=a%2;
		 e=c/2;
		 f=c%2;
		 g=e/2;
		 h=e%2;
		 i=g/2;
		 j=g%2;
		 k=i/2;
		 l=i%2;
		 m=k/2;
		 n=k%2;
		 o=m/2;
		 p=m%2;
		printf("\n\tThe BINARY equivalent of %d is: %d%d%d%d%d%d%d%d\n",rn,p,n,l,j,h,f,d,b);
		decimalnum=(p*2*2*2*2*2*2*2)+(n*2*2*2*2*2*2)+(l*2*2*2*2*2)+(j*2*2*2*2)+(h*2*2*2)+(f*2*2)+(d*2)+(b*1);
		printf("\n\tthe DECIMAL equivalent of %d%d%d%d%d%d%d%d is: %d\n",p,n,l,j,h,f,d,b,decimalnum);
		if (rn==decimalnum)
		{printf("\n\tHurrah! Your program is correct.\n");
		
		}
	}
		else 
			printf("\n\tInvalid Input!!");
}
