#include<stdio.h>
int main(){
	int gender;
	float height;
	printf("ENTER GENDER\n For male: 1\n For female: 0\n");
	scanf("%d",&gender);
	printf("ENTER YOUR HEIGHT\n");
	scanf("%f",&height);
	if (gender == 1)
	{ 
	printf("\tGENDER:\tMALE\n\tHEIGHT(m):");
	if(height<=1.70)
	printf("SHORT");
	if(height>=1.70 && height<1.85)
	printf("NORMAL");
	if(height>=1.85)
	printf("TALL");
	}
	if (gender==0)
	{ printf("\tGENDER:\tFEMALE\n\tHEIGHT(m):");
	if (height<1.60)
	printf("SHORT");
	if (height>=1.60 && height<1.75)
	printf("NORMAL");
	if (height>=1.75)
	printf("TALL");
	}
} 
