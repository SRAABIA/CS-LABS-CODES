#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int i,x;
    float area[6]={0},max=0;
    float a[6]={137.4,155.2,149.3,160.0,155.6,149.7};
    float b[6]={80.9,92.62,97.93,100.25,68.95,120.0};
	float angle[6]={0.78,0.89,1.3,9.00,1.25,1.75};
    for(i=0;i<6;i++){
        area[i]=(a[i]*b[i]*sin(angle[i]))/2;
        printf("\nArea of plot[%d] = %.4f ",i+1,area[i]);
    if(area[i]>max)
		max=area[i];
        x=i;
    }
    printf("\nThe Largest area is of plot %d = %.4f",x+1,max);
}