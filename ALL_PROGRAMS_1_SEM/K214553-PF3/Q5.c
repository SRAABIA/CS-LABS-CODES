#include<stdio.h>
#include<math.h>
int main(){
	int msd,N,x1=1,y1=3,i,x2,y2;
	float distance=0;
	
	printf("Enter MSD: ");
	scanf("%d",&msd);
	if(msd>0 && msd<=9){
		N=pow(2,msd)*0.0625;
	}
	else if(msd==0){
		N=pow(2,msd)*4+3;	
	}
	for(i=0 ; i<=N ; i++){
		printf("\n*\nEnter cordinates (x2,y2): ");
		scanf("%d%d",&x2,&y2);
		
		distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		printf("\nThe distance from R(1,3) to point (%d,%d) is = %.4f units.",x2,y2,distance);
	}
}
