#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;

} s;
int main()
{
    printf("Enter information: ");
    printf("\nEnter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("\nEnter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    system("cls");
    printf("\nDisplaying Information: \n");
    printf("Name: ");+
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);
    return 0;
}