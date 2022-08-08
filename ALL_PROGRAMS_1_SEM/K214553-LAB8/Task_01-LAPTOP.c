#include<stdio.h>
int main(){
int newarr[10],counter=0,i,j,num;
for(i=0;i<=9;i++){
printf("Enter number: ");
scanf("%d",&newarr[i]);
}
printf("\nEnter number to check: ");
scanf("%d",&num);

for(j=0;j<=9;j++){
if(num==newarr[j]) {
counter++;
}

}
printf("\nThe number %d appears %d times",num,counter);

if(counter==0){

printf("\nThe number is not present.");
}


}
