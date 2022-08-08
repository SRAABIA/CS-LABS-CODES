#include <stdio.h>
int main()
{
    int num, count = 0, rem = 0, sum, z;

    printf("Enter number: ");
    scanf("%d", &num);
    z = num ;
    
    while (z != 0)
    {
        z /= 10;
        count++;
    }   
    
    if (num > 999)
    {
        while (num > 9)
        {
            sum = 0;
            while (num > 0)
            {
                rem = num % 10;
                sum += rem;
                num /= 10;
            }
            num = sum;
        }

        printf("\nNum of digits: %d", count);

        printf("\nDigital Root: %d ", sum);
    }
    else
        printf("\nEnter number of or more than four digits.");
}
//SIR THIS CODE TOOK FOREVER!!
//BUT NOW WHEN IT WORKS LIKE FINE, AM V.HAPI. :)