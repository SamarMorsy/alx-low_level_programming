#include "main.h"
/**
 * print_array - print
 * @a: inout
 * @n: length
*/
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%d", a[i]);
			else
				printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
