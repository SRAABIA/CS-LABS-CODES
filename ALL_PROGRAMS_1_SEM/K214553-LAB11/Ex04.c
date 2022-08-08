#include <stdio.h>
#include <string.h>
struct book
{
    char title[100];
    int year;
    float price;
};
int main()
{
    char *ptr1;
    int *ptr2;
    float *ptr3;
    struct book b;
    strcpy(b.title, "Programming is fun");
    b.year = 2020;
    b.price = 95.78;
    ptr1 = b.title; //string hota he address hy
    ptr2 = &b.year;
    ptr3 = &b.price;
    printf("%s\n%d\n%.2f\n", ptr1, *ptr2, *ptr3);
    return 0;
}