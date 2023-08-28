#include "main.h"
/**
 * _memset - set a byte
 * @s: pointer to memory place
 * @b: byte
 * @n:number of times
 * Return: pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			s[i] = b;
			i++;
		}
	}
	return (s);
}
