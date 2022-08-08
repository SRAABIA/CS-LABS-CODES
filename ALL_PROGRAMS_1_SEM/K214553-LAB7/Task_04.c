#include<stdio.h>
int main()
{
int num,sq,neg=0,pos=0,cnt=0;
    do
      {
      printf("enter num :");
      scanf("%d",&num);
      if(num>=100 && num<=200)
      {
      cnt++;
      }
        if(num%2!=0)
        {
          sq=num*num;
          printf("square of number is %d\n",sq);
        }
        if(num<0)
        {
        neg++;
        }
        else
        {
        pos++;
        }
  } while(num<15||num>25);

  printf("\npositive number %d \n",pos);
  printf("\nnegative number %d \n",neg);
  printf("\nnumber[100,200] %d \n",cnt);
     



}