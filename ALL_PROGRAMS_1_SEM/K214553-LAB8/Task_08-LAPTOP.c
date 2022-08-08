#include <stdio.h>
int main()
{
    int a, b, c, result, count = 0;

    for (a = -10; a <= 10; a++)
    {
        for (b = -10; b <= 10; b++)
        {
            for (c = -10; c <= 10; c++)
            {
                result = 3 * a + 7 * b - 5 * c;
                if (result == 10)
                {
                    printf("solution:  %d %d %d\n", a, b, c);
                    // count++;
                    // printf("%d count",count);
                }
            }
        }
    }
}