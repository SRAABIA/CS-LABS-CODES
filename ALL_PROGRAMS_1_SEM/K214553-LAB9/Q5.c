#include <stdio.h>
int main()
{
	int matrix[2][2], transpose[2][2], row, col;
	// Storing elements of the matrix
	printf("\nEnter elements of matrix:\n");
	for (row = 0; row < 2; row++)
		for (col = 0; col < 2; col++)
		{
			printf("Enter element a[%d][%d]: ", row, col);
			scanf("%d", &matrix[row][col]);
		}
	// Finding the transpose of matrix
	for (row = 0; row < 2; row++)
		for (col = 0; col < 2; col++)
		{
			transpose[col][row] = matrix[row][col];
		}
	//Checking symmetry
	if (matrix[1][0] == transpose[1][0] )
	{
		printf("\nMatrix is symmetric.\n\n");
		for (row = 0; row < 2; row++)
		{
			for (col = 0; col < 2; col++)
			{
				printf(" %d ", matrix[row][col]);
				if (col == 1)
					printf("\n");
			}
		}
	}
	else
	{
		printf("\nMatrix is asymmetric.\n\n");
	}

	return 0;
}