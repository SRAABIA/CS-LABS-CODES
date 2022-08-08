#include<stdio.h>
int main(){
	int budget,onerarea,tenrarea,floors,building;
	float oneraf,tenraf,block,oneroomcost,buildingcost,x;
	
	building=40;
	oneroomcost=0.5;
	floors=4;
	budget=40;
	onerarea=44;
	tenrarea=10;
	
	oneraf=onerarea*10.7639;
	printf("The area of Each room in sq.ft is %0.2fsq.ft\n",oneraf);
	
	tenraf=tenrarea*oneraf;
	printf("\nThe area of TEN room in sq.ft is %0.2fsq.ft\n",tenraf);
	
	block=tenraf*floors;
	printf("\nThe area of block in sq.ft is %0.2fsq.ft\n",block);
	
	buildingcost=oneroomcost*building;
	printf("\nThe cost of building is %0.2f Million\n",buildingcost);
	
	x=budget-buildingcost;
	//printf("%f",x);
	
	if(x==0)
	printf("\nBudget is enough.");
	
	else if (x>0)
	printf("\nBudget is enough and the amount saved after construction is: %0.2f Million",x);
	
	else
	printf("Amount required is: %0.2f",x);
	
}
