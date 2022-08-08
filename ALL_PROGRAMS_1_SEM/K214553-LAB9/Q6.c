#include <stdio.h>
#include<string.h>
void main()
{
	char name1[10], name2[10], a = 0, b = 0;
	puts("Enter your first name: ");
	gets(name1);
	puts("Enter your last name: ");
	gets(name2);
	printf("Full name: %s", strcat(name1, name2));
	a = strlen(name1);
	//b=strlen(name2);
	printf("\nNo. of characters: %d", a);
}
