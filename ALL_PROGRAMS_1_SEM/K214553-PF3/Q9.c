#include <stdio.h>
int main()
{
    int row, column,non;
    char ch = 96 ; 
    printf("\nWRITE: ");       
    scanf(" %d", &non);
    
    if(non<=0 || non>26){
    	printf("\nThere are 26 letters in alphabets.");
	}
	
	else{
    for (row = 1; row <= non; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%c", (ch+column));
        }
        printf("\n");
    }
	}
}
