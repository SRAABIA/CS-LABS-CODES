#include<stdio.h>
int Recursive_sum(int);
int Iterative_sum(int);
int main(){
    int s,f,select;
    printf("\nSelct which funtion you want to call:\n\t1.Recursive Function\n\t2.Iterative Function\n:: ");
    scanf("%d",&select);
    switch(select){
        case 1:
        s=Recursive_sum(1);
        printf("\n\t\tSUM OF FIRST TEN NATURAL NUMBERS USING RECURSION:\n\t\t");
        printf("\t\tSum: %d",s);
        break;
        case 2:
        f=Iterative_sum(1);
        printf("\n\t\tSUM OF FIRST TEN NATURAL NUMBERS USING ITERATION:\n\t\t");
        printf("\t\tSum: %d",f);
        break;
    }
}
int Recursive_sum(int n){
    if(n!=10){
        return n+Recursive_sum(n+1);
    }
    else return 10;
}
int Iterative_sum(int n){
    int i,sum=0;
    for(i=0;i<11;i++){
        sum+=i;
    }
    return sum;
}
