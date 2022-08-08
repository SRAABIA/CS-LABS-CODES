#include <stdio.h>
int main()
{
    int age, site, n, count;
    for (count = 0; count < 11; count++)
    {
        printf("\nEnter your age: ");
        scanf(" %d", &age);
        printf("\nDo you belong to \n1.Urban\n2.Rural? ");
        scanf(" %d", &site);
        if (age >= 18 && site == 1)
        {
            printf("\n YOU ARE ELIGIBLE FOR A VACCINATION.");
        }
        else if (age < 18 && site == 2)
        {
            printf("\n YOU ARE NOT ELIGIBLE FOR A VACCINATION.");
        }
        else if (age >= 18 && site == 2)
        {
            printf("\n YOU ARE ELIGIBLE FOR A VACCINATION.");
        }
        else if (age < 18 && site == 1)
        {
            printf("\n YOU ARE NOT ELIGIBLE FOR A VACCINATION.");
        }
        else
        {
            printf("\nInvalid input.");
        }
    }
}
