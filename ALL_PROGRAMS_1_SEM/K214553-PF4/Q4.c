#include <stdio.h>
void display(int[]);
int main()
{
    int array[10] = {0}, i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    display(array);
}
void display(int array[])
{
    int i, sum = 0, min = array[0], max = 0;
    for (i = 0; i < 10; i++)
    {
        sum += array[i];
        if (array[i] > max)
            max = array[i];

        else if (array[i + 1] < min)
        {
            min = array[i];
        }
    }

    printf("\nSum of array is: %d", sum);
    printf("\nMinimum value: %d", min);
    printf("\nMaximum value: %d", max);
}