/**
 * main - entry point
 *
 * Description: print all alphapet in low case using putchar()
 *
 * Return: alwayes 0 (success)
*/
#include <stdio.h>
int main(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
