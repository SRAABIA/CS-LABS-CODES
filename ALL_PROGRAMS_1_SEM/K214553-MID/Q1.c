#include <stdio.h>
int main()
{
	int num1, num2, a, b, c, d, e, f, g, h, sum = 0;
	printf("\nEnter 1st number:  ");
	scanf("%d", &num1);
	printf("\nEnter 2nd number:  ");
	scanf("%d", &num2);
	sum = num1 + num2;
	printf("\nThe sum is %d", sum);
	a = sum / 10;
	b = sum % 10;
	c = a / 10;
	d = a % 10;
	e = c / 10;
	f = c % 10;
	g = e / 10;
	h = e % 10;
	if (b == h && d == f)
	{
		printf("\nReverse of the number is %d%d%d%d", h, f, d, b);
		if ((sum % 2) != 0)
		{
			if (sum % 3)
			{
				printf("\nThe sum is not multiple of 3");
			}
			else
			{
				printf("\nThe number is multiple of 3");
			}
		}
		else if (sum % 2 == 0)
		{
			if ((sum % 2 || sum % 3 || sum % 5))
			{

				if (sum % 2 == 0)
					printf("\nsum is multiple of 2");
				if (sum % 3 == 0)
					printf("\nsum is multiple of 3");
				if (sum % 5 == 0)
					printf("\nsum is multiple of 5");
			}
			else
			{
				printf("\nThe number is not multiple of 2,3,5");
			}
		}
	}
	else
	{

		if ((sum % 2) != 0)
		{
			if (sum % 3 != 0)
			{
				printf("\nThe sum is notmultiple of 3");
			}
			else
			{
				printf("\nThe number is multiple of 3");
			}
		}
		else if (sum % 2 != 0)
		{
			if (!(sum % 2 || sum % 3 || sum % 5))
			{
				if (sum % 2 != 0)
					printf("\nsum is multiple of 2");
				if (sum % 3 != 0)
					printf("\nsum is multiple of 3");
				if (sum % 5 != 0)
					printf("\nsum is multiple of 5");
			}
			else
			{
				printf("\nThe number is not multiple of 2,3,5");
			}
		}
	}
}
