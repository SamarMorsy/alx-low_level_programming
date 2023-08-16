#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * @n: start
 * Return: void
*/
void print_to_98(int n)
{
	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (!(i == 98))
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
}
