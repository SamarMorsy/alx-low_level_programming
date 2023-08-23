#include "main.h"
/**
 * print_array - print
 * @a: inout
 * @n: length
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n)
			printf("%d\n", a[i]);
		printf("%d, ", a[i]);
	}
}
