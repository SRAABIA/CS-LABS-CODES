#include <stdio.h>
int main()
{
    int num, i, j, o, p, avg = 0, bavg = 0;
    int a[5], b[5];

    for (i = 1; i <= 5; i++)
    {
        printf("\nEnter A-ARRAY[%d] students' marks = ", i);
        scanf("%d", &a[i]);
    }

    for (j = 1; j <= 5; j++)
    {
        printf("\nEnter B-ARRAY[%d] students' marks = ", j);
        scanf("%d", &b[j]);
    }
    for (o = 1; o <= 5; o++)
    {
        for (p = 1; p <= 5; p++)
        {
            if (a[o] == b[p])
            {
                 printf("\n%d is common.", a[o]);
            }
        }
    }
}