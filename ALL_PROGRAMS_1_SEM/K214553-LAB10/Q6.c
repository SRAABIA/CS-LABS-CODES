#include<stdio.h>
#include<math.h>
int series(); //declaration
int series(int n){ //definition
   int sum=0,i;
  //  int a;
    for(i=0;i<=n;i++){
        sum+=pow(i,3);

    }
    return (sum);

}
int main(){ 
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("\nSum of series: %d",series(n)); //calling

}
