#include<stdio.h>
int main(){
int choice;
float side,sq,c,r,rec,p,b,t,pal;
float const pi=3.142, m=0.5;
	printf("\nEnter the choice:\n0: Square\n1: Circle\n2: Rectangle\n3: Right-angle Triangle\n4: Parallelogram\n>:\t");
	scanf("%d", &choice);
			switch(choice)
			
			{
			case 0:
			printf("\nEnter side length:\t");
			scanf("%f",&side);
			sq=side*side;
			printf("\nThe area of square is %f\n",sq);
			break;
			
			case 1:
			printf("\nEnter radius length:\t");
			scanf(" %f",&side);
			c=pi*side*side;
			printf("\nThe area of circle is %f\n",c);
			break;
			
			case 2:
			printf("\nEnter the first side:\t");
			scanf(" %f",&side);
			printf("\nEnter the second side:\t");
			scanf(" %f",&r);
			rec=r*side;
			printf("\nThe area of rectangle is %f",rec);
			break;
			
			case 3:
			printf("\nEnter the perpendicular side:\t");
			scanf(" %f",&side);
			printf("\nEnter the base length:\t");
			scanf(" %f",&r);
			t=m*side*r;
			printf("%f is the area of right angled triangle.\n",t);
			break;

			case 4:
			printf("\nEnter the base:\t");
			scanf("%f",&side);
			printf("\nEnter the height:\t");
			scanf("%f",&r);
			pal=side*r;
			printf("\n%f is the area of parallelogram.\n",pal);
			break;

			default:
			printf("\nChoose from the given options only.\n");
			break;
		    }
}
