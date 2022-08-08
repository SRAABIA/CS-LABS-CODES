#include<stdio.h>
#include<string.h>

struct student{
    int rollno;
    char name[30];
    float marks;
};
void sort(struct student[],int);
void roll(struct student[],int);
void name(struct student[],int);

int main(){
    int n,i;
    printf("\nHow many students? ");
    scanf("%d",&n);
    struct student kid[n];
    for(i=0;i<n;i++){
        printf("\n--------------------------------\n");
        printf("--------------------------------\n");

        printf("\nEnter roll no of std[%d]: ",i+1);
        scanf("%d",&kid[i].rollno);
        printf("\nEnter Name of std[%d]: ",i+1);
        scanf("%s",kid[i].name);
        printf("\nEnter marks of std[%d]: ",i+1);
        scanf("%f",&kid[i].marks);
    }
        printf("\n--------------------------------\n");
        printf("\n--------------------------------\n");

// printf("\nRoll no. : %d\nName : %s\nMarks: %.2f",kid[0].rollno,kid[0].name,kid[0].marks);
    while(1){
    printf("\n\n\n\n\n******************************************************************************\n\t\t\tSTUDENT DETAILS\n");
    printf("1. Sort the data according to the marks obtained\n2. Search and print the data based on a roll number\n3. Search and print the data based on name\n4.Exit\n= ");
    int ans;
    scanf("%d",&ans);
    switch(ans){
        case 1:
        sort(kid,n);
        break;
        case 2:
        roll(kid,n);
        break;
        case 3:
        name(kid,n);
        break;
        case 4:
        return 0;
        break;
    }
  }
}
/*Write a function that will sort the data according to the marks obtained.*/
void sort(struct student var[],int m){
    struct student temp;
    int i,j;
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            if(var[i].marks<var[j].marks){
            temp = var[i];
            var[i]=var[j];
            var[j]=temp;
            }
        }
    }
    printf("\n==============================================================================\n");
    printf("\nS.no\t    Roll No.\tName\tMarks\n");
    for(i=0;i<m;i++){
        printf("\nStudent[%d]:\t%d\t%s\t%.2f",i+1,var[i].rollno,var[i].name,var[i].marks);
    }
}
/*Write a function to search and print the data based on a roll number.*/
void roll(struct student sea[],int n){
    struct student temp;
    printf("\nEnter roll no. you want to search: ");
    scanf("%d",&temp.rollno);
    int i;
    for(i=0;i<n;i++)
    if(temp.rollno==sea[i].rollno)
            {printf("\nStudent:\t  Roll No.\tName\tMarks\n");
            printf("       \t\t\t%d\t%s\t%.2f\n",sea[i].rollno, sea[i].name, sea[i].marks);
            }
}
/*Write a function to search and print the data based on name*/
void name(struct student wave[],int o){
    struct student temp;
    printf("\nPlease enter the name you want to search");
    scanf("%s",temp.name);
    int i,x;
    for(i=0;i<o;i++){
    x=strcmp(temp.name,wave[i].name);
    if(x==0)
    {
        printf("\nStudent:\t  Roll No.\tName\tMarks\n");
        printf("       \t\t\t%d\t%s\t%.2f\n",wave[i].rollno, wave[i].name, wave[i].marks);
    }
  } 
}