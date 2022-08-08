#include <stdio.h>
int main()
{
    int array[6], i, j;

        for (i = 0; i < 6; i++)
    {
        printf("Enter number for [%d] array  ", i);
        scanf("%d", &array[i]);
    }
    printf("\n");
    for (i = 0, j = 5; i < j; i++, j--) //jesy he i j say bara hoga terminate
    {
        if (array[i] != array[j])
        {
            printf("\n\t\tThis array is not symmetric.\n\n");
            return 0;
        }
    }
    printf("\n\t\tThis array is symmetric.\n\n");
}