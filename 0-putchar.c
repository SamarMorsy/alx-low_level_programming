/**
 * main - entry point
 *
 * description: print _Putchar
 *
 * Return: alwaes 0 (success)
*/
#include <stdio.h>
int main(void)
{
	char x[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
		putchar(x[i]);
	putchar('\n');
	return (0);
}