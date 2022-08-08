#include<stdio.h>
#include<string.h>
void Sentence(char *,int *);
int main(){
	int s,i;
	char str[100];
	printf("Enter the sentence:");
	gets(str);
	s=strlen(str);
	Sentence(str,&s);
	
	for(i=0;i<s;i++){
		printf("%c",str[i]);
	}
}
void Sentence(char *arr,int *n){
	int i;
	for(i=0;i<*n;i++)
	{
			if(*(arr+0)>=97 && *(arr+0)<=122)
			{
			*(arr+0)=*(arr+0)-32;
		}
		if(*(arr+i)==46) //full stop
		{
			if(*(arr+(i+1))>=97 && *(arr+(i+1))<=122)
			{
				*(arr+(i+1))=*(arr+(i+1))-32;
			}
		}
		if(*(arr+i-1)!=46)
		{
			if(i>0 && *(arr+i)>=65 && *(arr+i)<=91)
			{
			*(arr+i)=*(arr+i)+32;
			}	
		}
	}	
}

