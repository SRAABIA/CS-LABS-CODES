#include <stdio.h>
struct date

{
    int day;

    int month;

    int year;
};

int main(void)

{

    struct date d;
    printf("%u\n", sizeof(d));
    return 0;
}