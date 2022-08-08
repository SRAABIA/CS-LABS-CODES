#include <stdio.h>
int main()
{
	int row, col, max = 0, i, j;
	printf("enter number of rows: ");
	scanf("%d", &row);
	printf("enter number of columns: ");
	scanf("%d", &col);
	int arr[row][col];
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("matrix[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		printf("\n\n");
	}
	printf("\nThe max is: %d", max);
}
