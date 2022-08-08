#include<stdio.h>
#include<string.h>
#include<conio.h>
struct date{
    int day;
    int month;
    int year;
};
struct product{
    char name[50];
    double price;
    struct date s_date;
    struct date e_date;
};
int main(){
    struct product prod;
    strcpy(prod.name,"Shampoo");
    prod.price=1596.5;
    
    prod.s_date.day=15;
    prod.s_date.month=5;
    prod.s_date.year=2002;

    prod.e_date.day=20;
    prod.e_date.month=6;
    prod.e_date.year=2003;
    printf("\nThe product life is %d",prod.e_date.year-prod.s_date.year);
    getch();
}