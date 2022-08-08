#include<stdio.h>
int main(){
	float pf,cal,ecc;
	printf("enter calculus marks\t");
	scanf("%f",&cal);
	printf("enter PF marks\t");
	scanf("%f",&pf);
	printf("enter ECC \t");
	scanf("%f",&ecc);
	if (pf>cal && cal>ecc)
	{
	printf("\n\nMarks: %f\t%f\t%f",ecc,cal,pf);
	}
	if (cal>pf && pf>ecc)
	{printf("\n\nMarks: %f\t%f\t%f",ecc,pf,cal);
	}	
	if (ecc>pf && pf>cal)
	{printf("\n\nMarks: %f\t%f\t%f",cal,pf,ecc);
	}	
}
