#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void CountFrequency(int[], int);

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array1[size];
    int i;
    srand(time(NULL));
    printf("array1[%d]= ", size);
    for (i = 0; i <= size; i++)
    {
        array1[i] = rand() % 10;
        printf(" %d ", array1[i]);
    }
    // printf("\n\n%d", array1[values are perfectly stored]);
    CountFrequency(array1, size);
}
void CountFrequency(int array[], int a)
{
    int fre[1000] = {0};
    //array[];
    int i, j, count = 0;
    for (i = 0; i < a; i++)
    {
        count = 1; //already occured one time
        if (array[i] != -1)
        {                               //see line 44
            for (j = i + 1; j < a; j++) //starting from next number
            {
                if (array[i] == array[j])
                {
                    count++;
                    array[j] = -1; //this will replace number so that it is not recalculated .
                }
                //fre[j] = 0;
            }
            fre[i] = count; //means current numbr occured this times.
        }
    } //printf("\nArray1[%d] occurs %d times.", 3, count);
    printf("\nFrequency of all elements of array : \n");
    for (i = 0; i < a; i++)
    {
        if (array[i] != -1) //only check array for non-repeated values.
        {
            printf("%d occurs %d times\n", array[i], fre[i]); //fre has frequency stored in it
        }
    }
}
//sorry for so much commenting but i will forget this typical logic later so i had to. :)