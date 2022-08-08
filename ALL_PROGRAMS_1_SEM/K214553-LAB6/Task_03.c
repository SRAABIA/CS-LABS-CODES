#include<stdio.h>
int main(){
	float a,b,c;
	printf("\nprice of coca cola\t");
	scanf("%f",&a);
	printf("\nprice of pepsi\t");
	scanf("%f",&b);
	printf("\nprice of dew\t");
	scanf("%f",&c);
	if(a>b){
		if(a>c)
		{
			printf("\nCoca cola is most expensive = %f\n",a);
		}
		else if(c>a)
		printf("\nDew is most expensive = %f\n",c);
		}
	else if(b>a){
		if(b>c){
			printf("\nPepsi is most expensive = %f\n",b);
		}
		else if(c>b)
		printf("\nDew is most expensive = %f\n",c);
	}
}
