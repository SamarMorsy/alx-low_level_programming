#include "main.h"

/**
 * swap_int - swap two int
 *
 * @a: 1
 *
 * @b: 2
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
