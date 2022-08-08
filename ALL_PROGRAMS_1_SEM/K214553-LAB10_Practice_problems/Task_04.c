#include<stdio.h>
#include<conio.h>
int fab(int);
void main(){
	int i,x,n;
	printf("enter the nth term: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	x=	fab(i);
	printf("%d, ", x);
	}
}

int fab( int m)
{
	if(m==0){
		return 0;
	}
	else{
		if(m==1)
			return 1;
		else
			return(fab(m-1)+ fab(m-2));
	}
}
