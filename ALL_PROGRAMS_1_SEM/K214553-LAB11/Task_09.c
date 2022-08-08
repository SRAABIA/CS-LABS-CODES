#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int n;
	char *ptr;
	printf("How many characters:");
	scanf("%d",&n);
	ptr = (char*) malloc(n * sizeof(char));
	if(ptr == NULL){
		printf("Error");
		exit(1);
	}
	fflush(stdin);
	printf("Enter name ");
	gets(ptr);
	printf("Name = %s",ptr);
	free(ptr);
}

