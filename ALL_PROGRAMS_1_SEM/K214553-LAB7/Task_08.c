#include<stdio.h>
int main(){
    float avgcl,avgcs,avgcss; 
    float cl,css,cs,sl=0,sss=0,ss=0;
    int i;
    for(i=10 ; i>=1 ; i--)
    {
        printf("\n==============\nCL1002 grades: ");
        scanf("%f",&cl);
        sl=cl+sl;
        printf("\nCS1002 grades: ");
        scanf("%f",&cs);
        ss=ss+cs;
        printf("\nCS2002 grades: ");
        scanf("%f",&css);
        sss=sss+css;

    }
    avgcl=(sl)/10;
    avgcs=(ss)/10;
    avgcss=(sss)/10;

    printf("\n***************************************\nAverage grade in CL1002 course: %0.2f\n",avgcl);
    printf("\nAverage grade in CS1002 course: %0.2f\n",avgcs);
    printf("\nAverage grade in CS2002 course: %0.2f\n",avgcss);
    printf("\nThe Average grade of all students in all courses: %0.2f\n\n",(sl+ss+sss)/30);


}