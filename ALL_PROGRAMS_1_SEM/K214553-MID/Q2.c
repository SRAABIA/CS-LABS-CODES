#include <stdio.h>
int main()
{
	int batch, roll, a, b, c, d, e, f, g, h, sum, prod, cube;
	char loc;
	printf("\nWelcome to FAST\n");
	printf("\nEnter your batch:  ");
	scanf("%d", &batch);
	printf("\nEnter character of your location:  ");
	scanf(" %c", &loc);
	printf("\nEnter last 4 digits of your roll no.:  ");
	scanf("%d", &roll);
	a = roll / 10;
	b = roll % 10;
	c = a / 10;
	d = a % 10;
	e = c / 10;
	f = c % 10;
	g = e / 10;
	h = e % 10;
	sum = h + f + d + b;
	prod = b * d;
	switch (loc)
	{
	case 'k':

		printf("\nSum of digits of yur roll number : %d", sum);
		break;
	case 'l':
		printf("\nProduct of your rolll numbers last two digits is: %d", prod);

		break;
	case 'i':
		cube = d * d * d;
		printf("\nCube of your roll numbers last digit: %d", cube);
		break;
	}
	switch (batch)
	{
	case 21:
		printf("\nHello, Freshman welcome to FAST.\n");
		break;
	case 20:
		printf("\nHello, Sophomore.\n");
		//	printf("\nYour result is: ");
		break;
	case 19:
		printf("\nHello, Juniors.\n");
		break;
	case 18:
		printf("\nHello, Seniors.\n");
		break;
	}
}
