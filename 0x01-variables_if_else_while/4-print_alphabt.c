/**
 * main - entry point
 *
 * Descreption: print alphapet in lower case exept e and q
 *
 * Return: alwayes 0 (success)
*/
#include <stdio.h>
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (!((i == (int)'e') || (i == (int)'q')))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
