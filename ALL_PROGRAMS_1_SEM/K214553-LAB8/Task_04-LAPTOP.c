#include <stdio.h>
int main()
{
    int num=0;
    int i=0, j=0, f=0, f1=0;
    int sum=0, sum1=0;
    int avg = 0, bavg = 0;
    int a[5] = {0}, b[5] = {0};

    while(1){
    for (i = 0; i <= 4; i++)
    {
        printf("\nEnter marks of passed = ");
        scanf("%d", & a[i]);

        if (a[i] >= 5 && a[i] <= 10)
        {

            sum = sum + a[i];
        }
        else if(a[i] == -1)
		{
			break;
		}
    }

    for (j = 0; j <=4 ; j++)
    {
        printf("\nEnter marks of FAILED = ");
        scanf("%d", &b[j]);
        if (b[j] >= 0 && b[j] <= 5)
        {
            sum1 = sum1 + b[j] ;
        }
        else if(b[j] == -1)
		{
			break;
		}
    }

    for (f = 0; f < 5; f++)
    {
        printf("\nFAIL = %d", a[f] ) ;
    }
    for (f1 = 0; f1 <5; f1++)
    {

        printf("\nPASS = %d", b[f1]);
    }

    avg = sum / 5;
    printf("\nAvg of  PASS is = %d", avg);
    bavg = sum1 / 5;
    printf("\nAvg of FAIL= %d", bavg);
    return 0;
    }

}