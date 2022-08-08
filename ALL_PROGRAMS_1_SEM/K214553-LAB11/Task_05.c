#include<stdio.h>
void Sort(int*, int* ,int);
int main(){
	int size=100;
	int arr[size],order,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++) 
	{
		printf("Enter the %d element:",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nChoose the order \n1.Ascending order\n2.Decending Order:");
	scanf("%d",&order);
	
	Sort(arr , &size , order);
	
	for(i=0;i<size;i++) 
	{
		printf("array[%d]: %d\n",i,arr[i]);
	}
}
void Sort(int *arr , int *size , int order)
 {
	int i,j,temp;
	switch(order){
	case 1: //Ascending
		for(i=0;i<*(size);i++)
		{
			for(j=i+1;j<*(size);j++)
			{
				if(*(arr+i)>*(arr+j))
				{
					temp=*(arr+i);
					*(arr+i)=*(arr+j);
					*(arr+j)=temp;
				}
			}
		}
	break;
	case 2:
		//descending
		for(i=0;i<*(size);i++)
		{
			for(j=0;j<*(size);j++)
			{
				if(*(arr+i)>*(arr+j))
				{
					temp=*(arr+i);
					*(arr+i)=*(arr+j);
					*(arr+j)=temp;
				}
			}
		}
	break;
	}
}

