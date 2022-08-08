#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n;
	char *ptr, *p, *temp;
	printf("Enter number of characters in the name ");
	scanf("%d",&n);
	ptr = (char*) malloc(n * sizeof(char));
	temp = (char*) malloc(n * sizeof(char));
	if(ptr==NULL){
		printf("Error");
		exit(1);
	}
	fflush(stdin);
	printf("Enter name ");
	gets(ptr);
	strcpy(temp,ptr);
	printf("Name = %s\n",ptr);
	p = (char*) realloc(ptr,(n+9)*sizeof(char));
	fflush(stdin);
	printf("Enter ID ");
	gets(p);
	strcat(p," ");
	strcat(p,temp);
	printf("After = %s",p);
}

