#include<stdio.h>
#include<string.h>
#include<dir.h>
struct registers{
	int courseid;
	char coursename[50];
};
struct student{
	int studentid;
	char firstname[30];
	char lastname[30];
	char cellno[15];
	char email[40];
	struct registers r;
}std[5];

int main()
{
	int i;
	for(i=0;i<5;i++){
		printf("\n\t********************************\n");
		printf("\t\tSTUDENT %d\n",i+1);
		printf("\n\tEnter Student ID: ");
		scanf("%d",&std[i].studentid);
	
		printf("\n\tEnter First name: ");
		scanf("%s",&std[i].firstname);
		fflush(stdin);
		
		printf("\n\tEnter Last name: ");
		scanf("%s",&std[i].lastname);
		fflush(stdin);
		
		printf("\n\tEnter Cell No.(w/o space): ");
		scanf("%s",&std[i].cellno);
		//fgets(std[i].cellno,strlen(std[i].cellno),stdin);
		printf("\n\tEnter Email: ");
		scanf("%s",&std[i].email);
		fflush(stdin);
		
		printf("\n\tEnter Course ID: ");
		scanf("%d",&std[i].r.courseid);
		
		printf("\n\tEnter Course Name: ");
		scanf("%s",&std[i].r.coursename);
		fflush(stdin);
		printf("\n\t********************************\n");
	}
	printf("\n\t\tDISPLAYING RECORDS\n");
		for(i=0;i<5;i++){
		printf("\n\t********************************\n");
		printf("\n\t\tSTUDENT %d\n",i+1);
		printf("\n\tStudent ID:    %d",std[i].studentid);
		printf("\n\tName:          %s %s",std[i].firstname,std[i].lastname);
		printf("\n\tCell Number:   %s",std[i].cellno);
		printf("\n\tEmail:         %s",std[i].email);
		printf("\n\tCourse ID:     %d",std[i].r.courseid);
		printf("\n\tCourse Name:   %s",std[i].r.coursename);
		printf("\n\n\t********************************\n");
		}
}
