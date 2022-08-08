#include <stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, pen, wish, lol, choice, wd, depo, amount = 10000, pin = 1578;
	char quit;
	printf("\nEnter your secret pincode: ");
	scanf("%d", &pen);
	a = pen / 10;
	b = pen % 10;
	c = a / 10;
	d = a % 10;
	e = c / 10;
	f = c % 10;
	g = e / 10;
	h = e % 10;
	if (b == 8 && d == 7 && f == 5 && h == 1)
	{
		while (1)
		{

			printf("\n************* WELCOME TO ATM *************\n1. Check Balance\n2. Withdraw Cash\n3. Deposit Cash\n4. Quit\n*****************??****************\n");
			printf("\nEnter your choice:  ");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("\nYour balance is %d", amount);

				printf("\nDo you wish to have another transaction (y/n):  ");
				scanf(" %c", &wish);
				switch (wish)
				{
				case 'y':
				return 0;

					break;
				case 'n':
					
					break;
				}
				break;
			case 2:
				printf("\nEnter withdarw amount  ");
				scanf("%d", &wd);
				if (wd % 100 != 0)
				{
					printf("\nEnter multiple of 100 only.");
				}
				else
					printf("\nplease collect amount.");
				amount = amount - wd;
				printf("\nDo you wish to have another transaction (y/n):  ");
				scanf(" %c", &wish);
				switch (wish)
				{
				case 'y':

					break;
				case 'n':
					return 0;
					break;
				}
				break;
			case 3:
				printf("\nenter the amount to be deposited:  ");
				scanf("%d", &depo);
				printf("\nYour balance is %d", amount);

				printf("\nDo you wish to have another transaction (y/n):  ");
				scanf(" %c", &wish);
				switch (wish)
				{
				case 'y':

					break;
				case 'n':
					return 0;
					break;
				}
				break;
			case 4:
				printf("\nAre you sure you want to quit Y/N (y/n)  ");
				scanf("  %c", &quit);
				switch (quit)
				{
				case 'Y':

					break;
				case 'y':

					break;
				case 'N':
					return 0;
					break;
				case 'n':

					break;
				}
				break;
			}
		}
	}
	else
		printf("\nWrong pincode!");
}
