#include<stdio.h> 
#include<math.h>
int main(){
    int a,length,i,msd,lsd,o=0,s=1,m;
    printf("\nEnter MSD: ");
    scanf("%d",&msd);
    printf("\nEnter LSD: ");
    scanf("%d",&lsd);
    a=pow(2,5);
    length=(msd+lsd+a);
    printf("\n+0, +1, ");
    for(i=0 ; i<length ; i++)
    {
        m=o+s;
        printf("+%d, ",m);
        o=s;
        s=m;

    }
    printf("End.");

}
