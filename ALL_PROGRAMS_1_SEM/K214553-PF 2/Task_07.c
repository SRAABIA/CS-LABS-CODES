#include<stdio.h>
int main(){
	float x1,x2,x3,x4,y1,y2,y3,y4,s12,s23,s34,s41,s31,s42;
	printf("Enter (x1,y1)\t");
	scanf("%f%f",&x1,&y1);
	printf("Enter (x2,y2)\t");
	scanf("%f%f",&x2,&y2);
	printf("Enter (x3,y3)\t");
	scanf("%f%f",&x3,&y3);
	printf("Enter (x4,y4)\t");
	scanf("%f%f",&x4,&y4);
	
	s12=(y2-y1)/(x2-x1);
	s23=(y3-y2)/(x3-x2);
	s34=(y4-y3)/(x4-x3);
	s41=(y4-y1)/(x4-x1);
	s31=(y3-y1)/(x3-x1);
	s42=(y4-y2)/(x4-x2);

if(s12==s23&&s12==s34&&s12==s41|| s12==s31&&s12==s42&&s23==s34 || s23==s41&&s23==s31&&s23==s42 || s34==s41&&s34==s31&&s34==s42 || s41==s31&&s41==s42&&s31==s42 )
    { 	 
	printf("\nTHE GIVEN POINTS FALL ON A STRAIGHT LINE\n");
	}
	else 
	printf("\nTHE GIVEN POINTS DOES NOT FALL ON A STRAIGHT LINE\n\n");
}
