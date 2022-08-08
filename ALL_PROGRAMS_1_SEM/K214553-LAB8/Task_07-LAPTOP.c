#include <stdio.h>
int main()
{
    int num;
    while ( num>0 )
    {
        printf("\n\nEnter num: ");
        scanf("%d", &num);
        if (num>0 && num <= 10)
        {
            if (num % 2 != 0)
            {
                for (int i = 1; i <= 10; i++)
                {
                    printf("%d * %d = %d \n", num, i, num * i);
                }
            }
        }
        else
            printf("Range (0-10)");
    }
}