#include<stdio.h>
int main(){
int choice,sq,f;
int side,c,r,rec,t,pal;
float const pi=3.142, m=0.5;
	printf("\nEnter the choice:\n0: Square\n1: Circle\n2: Rectangle\n3: Right-angle Triangle\n4: Parallelogram\n>:\t");
	scanf("%d", &choice);
		switch(choice)			
			{
			case 0:
			printf("\nEnter side length:\t");
			scanf("%d",&side);
			sq=side*side;
			printf("\nThe area of square is %d and it is ",sq);
			
				fact:
        				f=f*sq;
        				sq--;
        			if(sq>0 && sq<=9)
        			{ 
        				goto fact;
       		        	
						

					}
					printf("\n\tThe FACTORIAL is: %d",f);
					return 0;
        	
        

			switch (sq % 2)
            	{
                	case 0:
                    printf("\n\tThe number is EVEN.\n");
                    break;
            	    
					case 1:
                    printf("\n\tThe number is ODD.\n");
                    break;
            		}
			switch(sq%2 && sq%3 && sq%5 && sq%7)
        			{					
        			case 0:
            		printf("\tNOT A PRIME NUMBER.\t\t");
					break;
					
					case 1:
					printf("\tPRIME NUMBER.\t\t");	
            		break;
        			}
 			break;
			
			case 1:
			printf("\nEnter radius length:\t");
			scanf(" %d",&side);
			c=pi*side*side;
			printf("\nThe area of circle is %d\n",c);
			
				fact1:
        				f=f*c;
        				c--;
        			if(c>0 && c<=9)
        			{ 
        				goto fact1;
						

					}
					printf("\n\tThe FACTORIAL is: %d",f);
						return 0;
					
			
			switch (c % 2)
            	{
                	case 0:
                    printf("\n\tThe number is EVEN.\n");
                    break;
            	    
					case 1:
                    printf("\n\tThe number is ODD.\n");
                    break;
            		}
			switch(c%2 && c%3 && c%5 && c%7)
        			{					
        			case 0:
            		printf("\tNOT A PRIME NUMBER.\t\t");
					break;
					
					case 1:
					printf("\tPRIME NUMBER.\t\t");	
            		break;
        			}
			break;
			
			case 2:
			printf("\nEnter the first side:\t");
			scanf(" %d",&side);
			printf("\nEnter the second side:\t");
			scanf(" %d",&r);
			rec=r*side;
			printf("\nThe area of rectangle is %d",rec);
			
				fact2:
        				f=f*rec;
        				rec--;
        			if(rec>0 && rec<=9)
        			{ 
        				goto fact2;
						

					}
					printf("\n\tThe FACTORIAL is: %d",f);
						return 0;
					
        	
			switch (rec % 2)
            	{
                	case 0:
                    printf("\n\tThe number is EVEN.\n");
                    break;
            	    
					case 1:
                    printf("\n\tThe number is ODD.\n");
                    break;
            		}
			switch(rec%2 && rec%3 && rec%5 && rec%7)
        			{					
        			case 0:
            		printf("\tNOT A PRIME NUMBER.\t\t");
					break;
					
					case 1:
					printf("\tPRIME NUMBER.\t\t");	
            		break;
        			}
        			
			break;
			
			case 3:
			printf("\nEnter the perpendicular side:\t");
			scanf(" %d",&side);
			printf("\nEnter the base length:\t");
			scanf(" %d",&r);
			t=m*side*r;
			printf("%d is the area of right angled triangle.\n",t);
			
				fact3:
        				f=f*t;
        				t--;
        			if(t>0 && t<=9)
        			{ 
        				goto fact3;
						

					}
					printf("\n\tThe FACTORIAL is: %d",f);
						return 0;
					
        	
        	
			switch (t % 2)
            	{
                	case 0:
                    printf("\n\tThe number is EVEN.\n");
                    break;
            	    
					case 1:
                    printf("\n\tThe number is ODD.\n");
                    break;
            		}
			switch(t%2 && t%3 && t%5 && t%7)
        			{					
        			case 0:
            		printf("\tNOT A PRIME NUMBER.\t\t");
					break;
					
					case 1:
					printf("\tPRIME NUMBER.\t\t");	
            		break;
        			}
			break;

			case 4:
			printf("\nEnter the base:\t");
			scanf("%f",&side);
			printf("\nEnter the height:\t");
			scanf("%f",&r);
			pal=side*r;
			printf("\n%f is the area of parallelogram.\n",pal);
			
				fact4:
        				f=f*pal;
        				pal--;
        			if(pal>0 && pal<=9)
        			{ 
        				goto fact4;
						

					}
					printf("\n\tThe FACTORIAL is: %d",f);
						return 0;
				
        	
			switch (pal % 2)
            	{
                	case 0:
                    printf("\n\tThe number is EVEN.\n");
                    break;
            	    
					case 1:
                    printf("\n\tThe number is ODD.\n");
                    break;
            		}
			switch(pal%2 && pal%3 && pal%5 && pal%7)
        			{					
        			case 0:
            		printf("\tNOT A PRIME NUMBER.\t\t");
					break;
					
					case 1:
					printf("\tPRIME NUMBER.\t\t");	
            		break;
        			}
			break;

			default:
			printf("\nChoose from the given options only.\n");
			break;
		    }
}
