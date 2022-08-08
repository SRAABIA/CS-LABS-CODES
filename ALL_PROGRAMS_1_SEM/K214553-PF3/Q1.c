#include<stdio.h>
int main(){
    int dob,oct,octal=0,m=1;
    printf("\nEnter the decimal number: ");
    scanf("%d",&dob);
    while(dob!=0){
        oct=dob%8;
        octal=octal+(oct*m);
        dob/=8;
        m*=10;
    }
    printf("\nOctal equivalent: %d",octal);

}