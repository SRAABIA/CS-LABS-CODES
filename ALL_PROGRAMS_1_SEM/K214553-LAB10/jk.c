#include<stdio.h>
#include<string.h>
int main()
{
	char name[30],sub1[30],sub2[30],sub3[30];
	int count=0,i;
	
	puts("enter your name");
	gets(name);
	puts("enter sub 1");
	gets(sub1);
	int x = strlen(sub1);
    int y = strlen(name);
	for(i=0;i<y;i++)
	{
		if(name[i]==sub1[i])
		{
			count++;
		}
		printf("%c occurs %d times in %s\n",name[i],cnt,sub1[30]);

	}
	
	
	printf("number of occurance of character of name in sub 3 is %d ",cnt1);
	
	
	
	
}