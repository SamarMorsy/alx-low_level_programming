#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: array length
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
