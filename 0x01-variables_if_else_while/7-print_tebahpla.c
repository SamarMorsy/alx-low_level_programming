/**
 * main - entry point
 *
 * Descreption: print a-z in reverse order (z-a)
 *
 * Return: alwayes 0 (success)
*/
#include <stdio.h>
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
