
#include<stdio.h>
int main(){
	int a;
	int *aptr;
	a=7;
	aptr = &a;
	printf("the address of a is %p\n the value of aptr is %p",&a,aptr);
	printf("the value of a is %d\n the value of aptr is %d",&a, *aptr);
	printf("\n\nshowing that * and & are complemnts of echothr\n&*aptr = %p\n*aptr=%p\n",&*aptr,*&aptr);
}
