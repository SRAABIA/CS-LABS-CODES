#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int  main(){

    int number,snumber,ans,qs;
    int x=10,y=1,s=10,r=1,a=0,b=0;

    srand(time(0));

    while(ans!=-1)
    {
    number=( rand()	% 10 ) ;
    //printf("%d\n",number);

    snumber=( rand() % 10 ) ;
    //printf("%d\n",snumber);

    if(number < snumber){

    printf("\n%d*%d=", number, snumber);
    scanf("%d", &ans);

    }
    else{
        printf("\n%d*%d=", snumber , number);
        scanf("%d",&ans);

    }
    qs=number*snumber;
    
    if(qs==ans){
        printf("\tCORRECT!");
        a++;
    }
    else{
        printf("\tWRONG!\n");
        printf("\tRIGHT ANSWER=%d \n",qs);
        b++;
    }

    }
    
    printf("\n\n\tPass =%d",a);
    printf("\n\tFail =%d",b);

    return 0;
}
