#include "main.h"
/**
 * _strncat - concatinate specific number of string
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	if (n > 0)
	{
		int destLen = 0;
		int scrLen = 0;
		int i;

		while (dest[destLen] != '\0')
			destLen++;
		while (src[scrLen] != '\0')
			scrLen++;
		if (n > scrLen)
			n = scrLen;
		for (i = 0; i <= n; i++)
		{
			if (i == n)
				dest[destLen + i] = '\0';
			else
				dest[destLen + i] = src[i];
		}
	}
	return (dest);
}


