#include <stdio.h>
/**
 * print_times_table - pritn time table
 * @n: input
 * Return: void
*/
#include <stdio.h>
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		printf("0");
		for (j = 1; j <= n; j++)
		{
			if ((i * j) > 9)
				printf(", %d", (i * j));
			else
				printf(",  %d", (i * j));
		}
		printf("\n");
	}
}
