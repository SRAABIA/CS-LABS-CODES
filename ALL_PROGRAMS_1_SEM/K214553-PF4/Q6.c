#include <stdio.h>
void inc(int[],int);
int main(){
     int i, size;
    printf("\nHow many values you want to enter? ");
    scanf("%d", &size);
    int array[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter array[%d]: ",i);
        scanf("%d", &array[i]);
    }
    inc(array,size);
}
void inc(int arr[],int sz){
    int i,j;
    for(i=0;i<sz;i++){
        arr[i]=arr[i]+2;
    }
    printf("\nIncremented Array: ");
    for(i=0;i<sz;i++){
    printf(" %d ",arr[i]);}
}