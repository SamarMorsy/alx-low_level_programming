#include "main.h"
/**
 * _memcpy - compy
 * @dest: dest
 * @src: src
 * @n : n
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int srcLen = *(&src + 1) - src;
	unsigned int destLen = *(&dest + 1) - dest;
	unsigned int i = 0;

	if ((n <= srcLen) && (n <= destLen))
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
