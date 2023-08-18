#include "main.h"

/**
 * print_triangle - print
 *
 * @size: input
 *
 * Return: void
*/

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = (size - 1); j > 0; j--)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}

	_putchar('\n');

}
