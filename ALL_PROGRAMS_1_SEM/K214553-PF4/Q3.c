#include <stdio.h>
int fib(int n);
int main()
{
    int n = 25,i; 
   // printf("Th 25th term of fibonacci squence is %d", fib(n));
    printf("Fibbonacci sequence of %d terms: " , n);
	
   for(i = 0;i<n;i++) {
      printf("%d ",fib(i));    
}
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if(n==1){
        return 1;
        }
    
    else {
        return (fib(n - 1) + fib(n - 2));

    }
}