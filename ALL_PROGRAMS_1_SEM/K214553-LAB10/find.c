
#include <stdio.h>
int find(int[], int);
int main()
{
    int rollno[5], search;
    for (int i = 0; i < 6; i++)
    {
        printf("::");
        scanf("%d", &rollno[i]);
    }
    printf("Search for? ");
    scanf("%d", &search);

    int i = find(rollno, search);
    if (i == 0)
    {
        printf("\nValue not found");
    }
    else
        printf("%d is the location of the variable", i);
}
int find(int roll[5], int s)
{
    int i = 0;
    for (i = 0; i < 6; i++)
    {
        if (roll[i] == s)
        {
            return (i + 1);
        }
    }
    return 0;
}