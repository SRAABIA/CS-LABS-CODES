#include<stdio.h>
#include<conio.h>
#include<math.h>
int iterativeBinToDec(int);
int recursiveBinToDec(int);
int main(){
	int bin,ch;

while(1){
	printf("\nEnter\n1. for iterative conversion\n1. for recursive\n3. for exit");
	scanf("%d",&ch);	

	switch(ch){
	
	case 1:
	printf("Enter any binary number: ");
	scanf("%d",&bin);
	printf("\nIterative Binary to decimal: %d",iterativeBinToDec(bin));
	break;
	case 2:
	printf("Enter any binary number: ");
	scanf("%d",&bin);	
	printf("\nRecursive Binary to decimal: %d",recursiveBinToDec(bin));
	break;
	case 3:
	
			return 0; break;
}
}
}
int iterativeBinToDec(int bin){
	int i=0,p=1 ,dec=0, x=0;
	while(bin!=0){
		x=bin%10;
		dec=dec+(x*p);
		x=0;
		bin=bin/10;
		p=p*2;		
	}
	return dec;
}
int recursiveBinToDec(int bin){
	int x=0,p=1,dec=0;
	
	if(bin/10==0){
		return bin;
	}
	else {
		dec=bin%10;
		return(dec+ recursiveBinToDec(bin/10)*2 );
	}

}




