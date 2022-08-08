#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("ENTER TWO INTGERS:");
	scanf("%d %i", &a, &b);
	c=a;
	a=b;
	b=c;
	printf("the value of a and b after swaping are %d %i",a,b);
	
}
