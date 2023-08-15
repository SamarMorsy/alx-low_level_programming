#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: input
 * Return: the last digit of n
 *
*/
int print_last_digit(int n)
{
	int mod_n;

	if (n > 0)
		mod_n = (n % 10);
	else
		mod_n = (_abs(n) % 10);
	_putchar(mod_n + '0');
	return (mod_n);
}
