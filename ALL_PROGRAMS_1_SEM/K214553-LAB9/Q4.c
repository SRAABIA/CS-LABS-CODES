#include <stdio.h>
int main()
{
	int i, j;
	float xavg, yavg, sum = 0, sum2 = 0, sum3 = 0, x, covariance;
	int std1_marks[] = {60, 75, 85, 95, 49};
	int std2_marks[] = {59, 70, 65, 45, 39};
	float n = 5;
	//for x
	for (i = 0; i < n; i++)
		sum += std1_marks[i];
	xavg = sum / 5;
	//for y
	for (j = 0; j < n; j++)
		sum2 += std2_marks[j];
	yavg = sum2 / 5;

	for (i = 0; i < n; i++)
	{
		x = ((std1_marks[i] - xavg) * (std2_marks[i] - yavg));
		sum3 = sum3 + x;
	}
	covariance = (1 / n) * sum3;
	printf("\ncov(x,y)= %f", covariance);
}
