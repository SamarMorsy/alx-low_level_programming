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

	while (*s[i] != '\0')
		i++;
	s = s + i;
	while (i != 0)
	{
		_putchar(*s);
		i--;
	}
}
