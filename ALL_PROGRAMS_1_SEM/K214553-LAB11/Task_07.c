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
}std;

int main()
{
		printf("\n\tEnter Student ID: ");
		scanf("%d",&std.studentid);
	
		printf("\n\tEnter First name: ");
		scanf("%s",&std.firstname);
		
		printf("\n\tEnter Last name: ");
		scanf("%s",&std.lastname);
		
		printf("\n\tEnter Cell No.(w/o space): ");
		scanf("%s",&std.cellno);

		printf("\n\tEnter Email: ");
		scanf("%s",&std.email);
		
		printf("\n\tEnter Course ID: ");
		scanf("%d",&std.r.courseid);
		
		printf("\n\tEnter Course Name: ");
		scanf("%s",&std.r.coursename);
		printf("\n\t********************************\n");
	
	printf("\n\t\tDISPLAYING RECORD\n");
		printf("\n\t********************************\n");
		printf("\n\tStudent ID:    %d",std.studentid);
		printf("\n\tName:          %s %s",std.firstname,std.lastname);
		printf("\n\tCell Number:   %s",std.cellno);
		printf("\n\tEmail:         %s",std.email);
		printf("\n\tCourse ID:     %d",std.r.courseid);
		printf("\n\tCourse Name:   %s",std.r.coursename);
		printf("\n\n\t********************************\n");
		}

