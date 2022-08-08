#include<stdio.h>
int main(){
    int t1,t2,l;

    printf("Enter 1 time taken: ");
    scanf("%d",&t1);
    printf("\nEnter 2 time taken: ");
    scanf("%d",&t2);
    
    for(l=t1>t2?t1:t2 ; l<=t1*t2 ; l++){
    	if(l%t1==0 && l%t2==0){
    		break;
		}
		
	}
	printf("\nOverlapping value: %d",l);
	
}
