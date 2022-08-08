#include<stdio.h>
int func(int );
int main(){
    int s,p;
    printf("\nEnter five digit positive integer: ");
    scanf("%d",&s);
    if(s<0 && s>99999){
        printf("\nEnter 5 digit num.");
    }
    else{
    p=func(s);
    printf("\nSum of digits of the 5-digit number is %d",p);
    }
}
int func(int n){
    if(n==0){
        return 0;
    }
    else{ 
       return((n%10)+func(n/10));
    }
    
}
