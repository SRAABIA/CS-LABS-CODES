#include<stdio.h>
#include<string.h>
int  WordCount(char *,int *);
int main(){
	int i,x;
	char string[120];
	printf("Enter text:");
	gets(string);
	x = strlen(string);
	
	printf("Words = %d",WordCount(string,&x));
}
int WordCount(char* text , int* n ){
	int c=1,i=0;
	while(i<*n){
		if( *(text+i)==32 ){
			c++;
		}
		i++;
	}
	return c;
}

