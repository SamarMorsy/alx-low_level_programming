#include "main.h"
/**
 * print_rev - print string reversed
 *
 * @s: input
 *
 * Return: void
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	while (i != 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}
