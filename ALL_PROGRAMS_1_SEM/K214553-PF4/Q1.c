#include <stdio.h>
void print(float); //POINTERS REQUIRED.
int main()
{
    float m1, m2, m3;
    printf("\nEnter marks of 1st subject out of 100: ");
    scanf("%f", &m1);
    printf("\nEnter marks of 2nd subject out of 100: ");
    scanf("%f", &m2);
    printf("\nEnter marks of 3rd subject out of 100: ");
    scanf("%f", &m3);
    float sum = m1 + m2 + m3;
    print(sum);
}
void print(float i)
{
    float a = i / 3;
    float p = (i / 300) * 100;
    printf("Average: %.2f", a);
    printf("\nPercentage: %.2f", p);
}