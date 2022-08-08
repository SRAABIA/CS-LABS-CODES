#include <stdio.h>
#include<math.h>
int main()
{
    float x, n = 0, N = 14,sum=1,p=0,k=0;
    unsigned long long fact = 1;
    printf("Enter value of x: ");
    scanf("%f", &x);
    for( n=1; n<=N ; n++){
        p=pow(x,n);
		fact=fact*n;
		k=pow(x,n)/fact;
		sum=sum+k;
    }
    //printf("\n %llu is fact of 14.",fact);
    printf("\nThe value of tylor swift is: %f",sum);
}
