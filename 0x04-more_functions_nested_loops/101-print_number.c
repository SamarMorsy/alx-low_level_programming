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
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10 == 0)
		print_num(num / 10);
	putchar('0' + (num % 10));
}
