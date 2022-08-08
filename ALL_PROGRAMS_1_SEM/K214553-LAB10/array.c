#include<stdio.h>
#include<math.h>
int main(){
    int array[3]={0};
    float f;
    for(int i=0 ; i<4 ; i++){
    f=pow(array[i],2);
    printf("\n%d\n",array[i]);
    printf("\n%d is %.2f",i,f);
    }
    printf("\npower of 2 by 2 is %f",pow(2,3));
}
