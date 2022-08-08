#include<stdio.h>
int main(){
	int result,grade;
	
	printf("Enter your grades in marks:\t");
	scanf("%d",&grade);

	result=(100>=grade&&75<=grade? printf("\t\t\t\tA") : 74>=grade&&50<=grade? printf("\t\t\t\tB"): 49>=grade&&0<=grade? printf("\t\t\t\tFAIL") : printf("\t\t\t\tINVALID INPUT."));

}


