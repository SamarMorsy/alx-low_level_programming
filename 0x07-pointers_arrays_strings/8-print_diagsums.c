#include "main.h"
/**
 * print_diagsums - print
 * @a: input
 * @size: input
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size - 1 - i];
		a = a + size;
	}
	printf("%d, %d", sum1, sum2);
}
