#include <stdio.h>
int main()
{
	int matrix[3][3], row, col, t = 0;

	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			printf("Enter element a[%d][%d]: ", row, col);
			scanf("%d", &matrix[row][col]);
			if (matrix[row][col] == 0)
			{
				t++;
			}
		}
	}
	if (t >= (row * col / 2))
	{
		printf("\n\tSparse matrix");
	}
	else
	{
		printf("\n\tNot sparse matrix");
	}
}
