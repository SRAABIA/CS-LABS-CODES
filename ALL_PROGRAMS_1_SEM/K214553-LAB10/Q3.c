#include <stdio.h>
#include <string.h>
int main()
{
    char str_a[40], str_b[40];
    int val = 0;
    puts("\nStudent one please enter string:  ");
    gets(str_a);
    puts("\nStudent two please enter string:  ");
    gets(str_b);
    val = strcmp(str_a, str_b);
    if (val > 0)
        printf("\nStudent two entered longer string: %s ", str_b);
    else if (val < 0)
        printf("\nStudent one entered longer string: %s ", str_a);
    else
        printf("\nBoth students entered equal strings.");

    return 0;
}
