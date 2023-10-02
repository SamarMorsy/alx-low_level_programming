#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: pointer to char
 * @src: pointer to char
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;
	int i;

	while (dest[destLen] != '\0')
		destLen++;
	while (src[srcLen] != '\0')
		srcLen++;
	for (i = 0 ; i <= srcLen; i++)
	{
		dest[destLen + i] = src[i];
	}
	return (dest);
}
