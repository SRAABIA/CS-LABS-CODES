#include <stdio.h>
int main()
{
    int num, count1 = 0, count2 = 0, count3 = 0, i, times = 0, ex = 0;
    printf("How many values you like to enter? ");
    scanf("%d", &times);
    for (i = 0; i < times; i++)
    {
        printf("Enter a real number: ");
        scanf("%d", &num);
        if (num > 0)
        {
            count1++;
        }
        else if (num < 0)
        {
            count2++;
        }
        else if (num == 0)
        {
            count3++;
        }
    }
    printf("\nPositive: %d", count1);
    printf("\nNegative: %d", count2);
    printf("\nZero:\t  %d", count3);
    //    ex=count1>count2? (count1>count3? count1 : count3) : (count2>count3? count2 : count3);
    //    printf("\nMajority count is : %d",ex);
    if (count1 > count2)
    {
        if (count1 > count3)
        {
            printf("\nMajority count is of POSITIVE NUMBERS: %d", count1);
        }
        else
            printf("\nMajority count is of ZEROES: %d", count3);
    }
    else
    {
        if (count2 > count3)
        {
            printf("\nMajority count is of NEGATIVE NUMBERS: %d", count2);
        }
        else
        {
            printf("\nMajority count is of ZEROES: %d", count3);
        }
    }
}
