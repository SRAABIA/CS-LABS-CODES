#include<stdio.h>
int main(){
	float a,b,c,min=0;
	printf("\nprice of coca cola\t");
	scanf("%f",&a);
	printf("\nprice of pepsi\t");
	scanf("%f",&b);
	printf("\nprice of dew\t");
	scanf("%f",&c);
	min= (a>b)?((a>c)?a:c):((b>c)?((c>b)?b:c):0);
	
	
	printf("\t The Highest price is of: %f",min);
}
