#include<stdio.h>
int main(){
	int i;
	float max,smax;
	float *ptr,array[20];
	ptr = array;
	printf("Enter the 20 elements of array:");
	for(i=0;i<20;i++){
		scanf("%d",&*(ptr+i));
	}
	max=*(ptr+0);
	for(i=0;i<20;i++){
		if(*(ptr+i)>max){
			max=*(ptr+i);
		}
	}
	smax=*(ptr+0);
	for(i=0;i<20;i++){
		if(*(ptr+i)==max){
			continue;
		}
		else if(*(ptr+i)>smax){
			smax=*(ptr+i);
		}
	}
	printf("The second largest number is : %.3f",smax);
}
