/**
 * main - entry point
 *
 * Descreption: print base10 juse putchar
 *
 * Return: alwayes 0 (success)
*/
#include <stdio.h>
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
