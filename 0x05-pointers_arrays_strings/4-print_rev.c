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
	int i;
	int l = _strlen(*s) - 1;

	s = s + l;
	for (i = l; i >= 0, i--)
	{
		_putchar(*s);
	}
}
