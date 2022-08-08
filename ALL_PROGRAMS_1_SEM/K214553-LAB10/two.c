#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    int x, y, i, k, h, g, c = 0,max=0;
    while (i != -1)
    {
        char name[30] = {0}, sub1[30] = {0};

        puts("\nenter your name ");
        gets(name);
        puts("enter sub 1");
        gets(sub1);
        x = strlen(sub1);
        y = strlen(name);
        int fre[1000] = {0};
        //array[];
        int i, j, c = 0;
       for(i=0;i<30;i++)
	{
		if(name[i]==sub1[i])
		{
			c++;
            fre[1000]=sub1[i];
		}

    }
    for(i=0;i<30,i++){
        if(sub1[i]>sub1[max])
        max=i;
    }
	printf("number of occurance of character of name in sub 1 is %d\n ",c);
    printf("\nCharcter %c occurs %d times in name.",max,sub1[max]);
    printf("\nenter -1 to exit 0 to continue");
    scanf("%d", &i);
 

    }
}