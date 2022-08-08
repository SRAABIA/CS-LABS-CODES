#include <stdio.h>
int main()
{
	int i, num, counter = 0, sum = 0;
	float sums = 0, av = 0;
	printf("how many numbers would you like to enter? ");
	scanf("%d", &num);
	int a[num];
	for (i = 0; i < num; i++)
	{
		printf("\nEnter a[%d] value: ", i);
		scanf("%d", &a[i]);
		sums += a[i];
		if (a[i] > 0)
		{
			sum += a[i];
			counter++;
		}
	}
	av = sums / num;
	printf("\nSum of all positive numbers: %d", sum);
	printf("\nAverage: %.4f", av);
}
