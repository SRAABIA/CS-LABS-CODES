#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double array[6] = {0};
    float sum = 0, avg;

    srand(time(0));
    //for new random numbers each time program is run
    for (int i = 0; i < 6; i++)
    {
        array[i] = (double)rand() / RAND_MAX; //expression for num bw 0 and 1
        printf("\n\t[%d] Array element is %f \n ", i, array[i]);

        sum = sum + array[i];

        //printf("\n\tSum of all arrays is %f",sum);
    }
    avg = sum / 6;
    printf("\n\tAverage = %f", avg);
    printf("\n\tSum = %f", sum);

    return 0;
}