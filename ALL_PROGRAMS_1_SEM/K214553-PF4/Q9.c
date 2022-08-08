#include<stdio.h>
#include<string.h>
#include<direct.h>
struct lib{
    int book_num;
    char title[40];
    char author[40];
    int price;
    char issue;

};
void addinfo(struct lib[],int);
void display(struct lib[],int);
void s_author(struct lib[],int);
void title(struct lib[],int);
void count(int);
void sno(struct lib[],int);

int main()
{
    int opt,num,i;
    ("\n\n*********************************************\n\t\tWELCOME TO LIBRARY\n*********************************************\n\n");
    printf("\nEnter how many books: ");
    scanf("%d",&num);
    struct lib info[num];
    while(1)
    {
    printf("\n\n******************************************************************************************\n\nSelect one option:\n1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of specified book\n5. List the count of books in the library number\n6. List the books in the order of accession\n7. Exit\n\n");
    scanf("%d",&opt);
    switch(opt){
        case 1:
        addinfo(info,num);
        break;
        case 2:
        display(info,num);
        break;
        case 3:
        s_author(info,num);
        break;
        case 4:
        title(info,num);
        break; 
        case 5:
        count(num);
        break; 
        case 6:
        sno(info,num);
        break;
        case 7:
        	return 0;
        break;
        }
    }
}
void addinfo(struct lib var[],int n){
        int i;
        for(i=0;i<n;i++){
        printf("\n\n-------------------------------------------------------------------------------------------\n");
        printf("--------------------------------------------- %d BOOK ---------------------------------------\n",i+1);
        printf("\nEnter book number: ");
        scanf("%d",&var[i].book_num);
        printf("\nEnter title: ");
		fflush(stdin);
		gets(var[i].title);
        printf("\nEnter author name: ");
		fflush(stdin);
		gets(var[i].author);
        printf("\nEnter price of book: ");
        scanf("%d",&var[i].price);
        printf("\nBook issued or not (N/Y)");
        scanf(" %c",&var[i].issue);
    }
}
void display(struct lib var[],int n){
    int i;
    printf("\n\n******************************************************************************************\n\n");
    printf("\n\n******************************** DISPLAYING INFORMATION **********************************");

    for(i=0;i<n;i++){
    printf("\n\n******************************************************************************************\n\n");
    printf("\n\t\tBook number: %d\n\t\tTitle: %s\n\t\tAuthor: %s\n\t\tPrice: %d\n\t\tIssued or not: %c",var[i].book_num,var[i].title,var[i].author,var[i].price,var[i].issue);
    }
}
void s_author(struct lib var[],int n){
    struct lib temp;
    int x,i;
    printf("\nEnter the author name you want to search: ");
	fflush(stdin);
	gets(temp.author);
    for(i=0;i<n;i++){
    x=strcmp(temp.author,var[i].author);
    if(x==0){
        printf("\n\n******************************************************************************************\n");
        printf("\n\t\tBook:\tTitle\tAuthor");
        printf("\n\t\t%d\t%s\t%s",var[i].book_num,var[i].title,var[i].author);
        }
    }
}
void title(struct lib var[],int n){
    struct lib temp;
    int i;
    printf("\nEnter book serial number: ");
    scanf("%d",&temp.book_num);
    for(i=0;i<n;i++){
        if(temp.book_num==var[i].book_num){
        printf("\n\n******************************************************************************************\n");
        printf("\n\t\tBook:\tTitle:\tAuthor:");
        printf("\n\t\t%d\t%s\t%s\n\n",var[i].book_num,var[i].title,var[i].author);
        }
    }
}
void count(int n){
    printf("\n\n******************************************************************************************\n\n");
    printf("\n\t\tTotal number of Books:\n\t\t\t%d",n);
    
}
void sno(struct lib var[],int n){
    int i,j;
    struct lib temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(var[i].book_num>var[j].book_num){
            temp = var[i];
            var[i]=var[j];
            var[j]=temp;
            }
        }
    }
    printf("\n\n******************************************************************************************\n");
    for(i=0;i<n;i++){
        printf("\n\n***********************************   %d BOOK  ********************************************\n\n",i+1);
        printf("\n\t\tBook number: %d\n\t\tTitle: %s\n\t\tAuthor: %s\n\t\tPrice: %d\n\t\tIssued or not: %c",var[i].book_num,var[i].title,var[i].author,var[i].price,var[i].issue);
    }
}


