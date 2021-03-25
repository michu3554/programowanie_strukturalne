#include <stdio.h>
#include <stdlib.h>

double min(double, double);

int main(void)
{
	double x, y;

	printf("Podaj dwie liczby: ");
	scanf("%lf %lf", &x, &y);
    printf("Mniejsza z tych liczb to: %f\n", min(x,y));

	return 0;
}

double min(double x, double y)
{

	return x < y ? x : y;
}
