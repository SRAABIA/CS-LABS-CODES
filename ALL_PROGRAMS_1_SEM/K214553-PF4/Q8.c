#include <stdio.h>
#include <string.h>
struct dates
{
    int dd;
    char mm[50];
    int yy;
} d, d2;
int main()
{
    printf("Enter date 1: ");
    scanf("%d %s %d", &d.dd, d.mm, &d.yy);
    printf("Enter date 2: ");
    scanf("%d %s %d", &d2.dd, d2.mm, &d2.yy);
    if ((d.dd == d2.dd) && strcmp(d.mm, d2.mm) == 0 && (d.yy == d2.yy))
    {
        printf("\nEQUAL");
    }
    else
        printf("\nUNEQUAL");
}