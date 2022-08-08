#include<stdio.h>
int main(){
	int digit,a,b,c,d,e,f,g,h,i,j,k,l,z,y;
	printf("\n\tEnter four digit intger: ");
	scanf("%d",&digit); 
	if(digit>999&&digit<=9999)
	{
	a=digit%10;
    digit/=10;
    b=digit%10;
	digit/=10;
	c=digit%10;
	digit/=10;
	d=digit%10;
 	e=(d+5)%8;
	f=(c+5)%8;
	g=(b+5)%8;
	h=(a+5)%8;
	z=e;
	e=f;
	f=z;
	y=g;
	g=h;
	h=y;
	printf("\n\tThe encrypted intger is: %d%d%d%d\n",e,f,g,h);
 	z=f;
	f=e;
	e=z;
 	y=h;
	h=g;
	g=y;
 	i=(8*1+e)-5;
	j=(8*1+f)-5;
	k=(8*1+g)-5;
	l=(8*1+h)-5;
	printf("\n\tThe decrypted value is: %d%d%d%d\n",i,j,k,l);
 	
 	if(i==d&&j==c&&k==b&&l==a)
 	{printf("\n\tThe encryption was successful!!\n");
	 }
	else
	printf("\n\tOops! Encryption did not complete successfully.\n");
 }
 else
 printf("\n\tInvalid Input!\n");
		
}
