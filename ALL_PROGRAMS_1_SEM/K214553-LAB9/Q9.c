#include <stdio.h>
int main()
{
    float a[25] = {0}, p[25] = {0}, iq[25] = {0};
    float A = 1, P = 4.5;
    int i, j;
    for (i = 0; A < 7.1, P < 13.6; i++)
    {
        a[i] = A;
        A = A + 0.4;
        p[i] = P;
        P = P + 0.6;
        //for iq_score
        //Iq_Score = 2 + (A + 0.5p)
        iq[i] = 2 + (a[i] + (0.5 * p[i]));
    }
    printf("\nA      P    IQ_SCORES\n");
    for (j = 0; j < i; j++)
    {
        printf("%.1f    %.1f    %.2f\n", a[j], p[j], iq[j]);
    }
}