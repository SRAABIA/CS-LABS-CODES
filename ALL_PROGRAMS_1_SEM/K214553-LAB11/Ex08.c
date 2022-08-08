#include<stdio.h>
void main()
{
	int *aptr;
	int a=10;
	aptr=&a;
	printf("the address of a = %p",&a);
	printf("\nthe address of aptr= %p",aptr);
	printf("\nthe val of a= %d", a);
	printf("\nthe val of aptr= %d", *aptr);
	printf("\nshowing that & and * are complements of each others\n&*aptr= %p\n*aptr=%p", &*aptr,*&aptr);

}
