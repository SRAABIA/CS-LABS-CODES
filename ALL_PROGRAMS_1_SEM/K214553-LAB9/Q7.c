#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the no.of days for which report is required (e.g: 30): ");
	scanf("%d",&n);
	int arr[4][n+1][7],epid[4],s1=0,s2=0;
    int sum1[5][1]={0},sum2[5][1]={0},sum3[5][1]={0},sum4[5][1]={0},sum5[5][1]={0},sum6[5][1]={0},sum7[5][1]={0},sum8[5][1]={0}; //ep id is a separate array for employee ids since it wont be of any use in further calculations. 
    printf("enter the values in the array: \n");
	for(i=0;i<4;i++)              //represents block //represents EMPLOYEE //MY FIRST EMPLOYEE IS i=0
	{ printf("*************************\nFOR EMPLOYEE %d\n  Enter employee ID: ",i+1);
    scanf("%d",&epid[i]);
		for(j=0;j<=n+1;j++)          //represents rows
		{   if(j==0){
			for(k=1;k<7;k++)        //represents columns    //EACH PRODUCT'S ID
           // if(k==0 && k<6)
           //array [0][6] ki location should always be empty
           //Column 0 should always be zero
           //means array[j][0]={0} so that values don't get messed up while adding

    		{
				printf("\nENTER PRODUCT ID %d the value at arr[%d][%d][%d]: ",k,i+1,j,k);
				scanf("%d",&arr[i][j][k]);
			}
        }      
           else if(j>=1 && j<=n){    //represents rows
            for(k=1;k<7;k++)      //represents columns
                                //EACH PRODUCT PRICES
    		{
				printf("\nENTER PRODUCT %d SOLD the value at arr[%d][%d][%d]: ",k,i+1,j,k);
				scanf("%d",&arr[i][j][k]);               
            }
		}
	}
    //for ep1
//FOR FINDING SUM ROW-WISE
         for(j=1;j<=n+1;j++){
             s1=0;
            for(k=1;k<7;k++){
               s1 += arr[1][j][k];
               sum1[j][7]=s1;

            }
        }   
//FOR FINDING SUM COLUMN-WISE
        for(k=1;k<7;k++){
            s2=0;
            for(j=1;j<=n+1;j++){
                s2+=arr[1][j][k];
                sum2[n+2][k]=s2;
            }
        }
         //for ep2
//FOR FINDING SUM ROW-WISE
         for(j=1;j<=n+1;j++){
             s1=0;
            for(k=1;k<7;k++){
               s1 += arr[2][j][k];
               sum3[j][7]=s1;

            }
        }   
//FOR FINDING SUM COLUMN-WISE
        for(k=1;k<7;k++){
            s2=0;
            for(j=1;j<=n+1;j++){
                s2+=arr[2][j][k];
                sum4[n+2][k]=s2;
            }
        }
         //for ep3
//FOR FINDING SUM ROW-WISE
         for(j=1;j<=n+1;j++){
             s1=0;
            for(k=1;k<7;k++){
               s1 += arr[3][j][k];
               sum5[j][7]=s1;

            }
        }   
//FOR FINDING SUM COLUMN-WISE
        for(k=1;k<7;k++){
            s2=0;
            for(j=1;j<=n+1;j++){
                s2+=arr[3][j][k];
                sum6[n+2][k]=s2;
            }
        }
         //for ep4
//FOR FINDING SUM ROW-WISE
         for(j=1;j<=n+1;j++){
             s1=0;
            for(k=1;k<7;k++){
               s1 += arr[4][j][k];
               sum7[j][7]=s1;

            }
        }   
//FOR FINDING SUM COLUMN-WISE
        for(k=1;k<7;k++){
            s2=0;
            for(j=1;j<=n+1;j++){
                s2+=arr[4][j][k];
                sum8[n+2][k]=s2;
            }
        }

//now finally printing the grand table we all waited for
//since it is mentioned in the question to print tables for PARTICULAR EMPLOYEE
printf("\nEmployee 1: ID- %d",epid[0]);
printf("\n\nSales person\t\tProducts\t\tTotal sales of a person");
//printf("   %d %d %d %d %d %d %d",)
for(j=0;j<n-1;j++){
    for(k=0;k<9;k++){
        if(k==0)
        printf("   %d %d %d %d %d %d   ",arr[i][j][k],arr[i][j][k],arr[i][j][k],arr[i][j][k],arr[i][j][k],arr[i][j][k]);
        if(k>0)
        printf("%d %d %d %d %d %d %d %d",j,arr[i][j][k],arr[i][j][k],arr[i][j][k],arr[i][j][k],arr[i][j][k],arr[i][j][k],sum1[j][7]);

    }
}
//printf("T_P %d %d %d %d %d %d")











}