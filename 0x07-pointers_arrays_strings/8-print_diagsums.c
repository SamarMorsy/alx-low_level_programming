#include "main.h"
/**
 * print_diagsums - print
 * @a: input
 * @size: input
*/
void print_diagsums(int *a, int size)
{
	int center;
	int sum1;
	int sum2;

	center = (size % 2) + 1;
	sum1 = a[0, 0] + center + a[size - 1, size - 1];
	sum2 = a[0, size - 1] + center + a[size - 1, 0];
	printf("%d, %d", sum1, sum2);
}
