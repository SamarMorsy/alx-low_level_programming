#include "main.h"

/**
 * print_number - print integer
 *
 * @n: input
 *
 * Return: void
*/
void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		number = -n;
		putchar('-');
	}
	else
	{
		number = n;
	}
	if (number / 10)
	{
		print_number(number / 10);
	}
	putchar('0' + (number % 10));
}
