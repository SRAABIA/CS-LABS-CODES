#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<dos.h>
int main(){
    int i,h,g,c,n_str;
    char name[40];
    puts("Enter your name in small letters: ");
    fflush(stdin);
    gets(name);
    n_str=strlen(name);
    printf("\n%d",n_str);
    char courses[8][56]={"introduction to information and communication technology","programming fundamentals-lab","programming fundamentals","calculus and analytical geometry","applied physics","english composition and comprehension-lab","english composition and comprehension","islamic studies"};
    for(i=0;i<n_str;i++){
        c=0;
        for(h=0;h<8;h++){
            for(g=0;g<56;g++){
                if(courses[h][g]==name[i])
                 c++;            
                }
            printf("\nIn course %d:  %c occured %d times ",h,name[i],c);

          }
            printf("\n\n*****************************************\n\n");

        }

    }
