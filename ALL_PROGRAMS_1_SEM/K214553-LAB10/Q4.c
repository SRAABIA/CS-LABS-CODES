#include <stdio.h>
void exp(int); //declaration
int main()
{
    int marks;
    printf("\nEnter test marks: ");
    scanf("%d", &marks);
    exp(marks);
}
void exp(int a)
{ //definition
    int year;
    if (a >= 60)
    {
        printf("\nEnter years of experience: ");
        scanf("%d", &year);
        if (a == 60 && year == 1)
            printf("\nYou are hired  as Assistant Developer.\n");
        else if (a == 70 && year >= 2)
            printf("\nYou are hired  as Associate Developer.\n");
    }
    else if (a == 50)
    {
        printf("\nEnter years of experience: ");
        scanf("%d", &year);
        if (year == 0)
            printf("\nYou are hired as Trainee Engineer.\n");
    }
}
