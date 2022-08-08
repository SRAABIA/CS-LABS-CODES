#include <stdio.h>
int main()
{
   int i, j;
   float swap = 0;

   float array[5] = {3.14, 3.24, 3.34, 3.44, 3.54};

   for (i = 0; i < 5; i++)
   {

      for (j = i + 1; j < 5; j++)
      { // value of j will be 1 while i is zero, which is less than 5
         if (array[i] < array[j])
         { //if value of i will be less than j value(added with one) it will swap the values

            swap = array[i];
            array[i] = array[j];
            array[j] = swap;
         }
      }
   }
   printf("\nDESCENDING:\n");
   for (i = 0; i < 5; i++)
   {
      printf("%f \n", array[i]);
   }

   return 0;
}