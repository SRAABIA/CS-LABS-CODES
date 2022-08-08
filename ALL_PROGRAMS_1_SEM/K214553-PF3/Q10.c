#include <stdio.h>
int main()
{
    int age, height, base, width;
    printf("Enter age: ");
    scanf("%d", &age);
    for (height = 1; height <= age; height++)
    {
        for (base = 1; base <= age; base++)
        {
            for (width = 1; width <= age; width++)
            {

                if ((width * width) == (height * height) + (base * base))
                {
                    printf("\nPyhtagorean triplets: %d,%d,%d", height, base, width);
                }
            }
        }
    }
}
