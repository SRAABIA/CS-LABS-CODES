#include<stdio.h>
void swap(int*,int*,int*);

int main(){
	int k=1,l=2,m=3;
	printf("Before swapping:\nk = %d\nl = %d\nm = %d",k,l,m);
	swap(&k ,&l ,&m);
	printf("\n\nAfter swapping:\nk = %d\nl = %d\nm = %d",k,l,m);
}
void swap(int* a,int* b,int* c){ //three pointers variable accepting klm adreses
	int temp;
	temp=*a;
	*a=*b;
	*b=*c;
	*c=temp;	
}
