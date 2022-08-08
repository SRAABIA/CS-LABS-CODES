#include <stdio.h>
#include <string.h>
int main()
{
    char nm1[40], nm2[40];
    
    printf("\n1st name: ");
    gets(nm1);
    printf("\n2nd name: ");
    gets(nm2);
    strcat(nm1, nm2);
    printf("Concatenation using strncat: %s", nm1);
    strrev(nm1);
    printf("\nReverse: %s", nm1);
}
