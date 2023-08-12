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

	int e = (int)'e';

	int q = (int)'q';

	int x = (i == e);

	int y = (i == q);

	for (i = 97; i < 123; i++)
	{
		if (!(x || y))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
