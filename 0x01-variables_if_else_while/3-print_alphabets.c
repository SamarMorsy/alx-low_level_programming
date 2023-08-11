/**
 * main - entry point
 *
 * Descreption: print both lower and upper case of the alphapet
 *
 * Return: alwayes 0 (success)
*/
#include <stdio.h>
int main(void)
{
	int i;

	/*lower case */

	for (i = 97 ; i < 123 ; i++)
		putchar(i);
	for (i = 65 ; i < 91 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
