#include "main.h"
/**
 * _strncpy - copy string
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srcLen = 0;
	int destLen = 0;

	if (n > 0)
	{
		while (dest[destLen] != '\0')
			destLen++;
		while (src[srcLen] != '\0')
			srcLen++;
		if (n > srcLen)
			n = srcLen;
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
		dest[srcLen] = '\0';
	}
		return (dest);
}
