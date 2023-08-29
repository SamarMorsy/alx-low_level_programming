#include "main.h"
/**
 * _strpbrk - return first occurence of char
 * @s: string
 * @accept: string
 * Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] == s[i]; j++)
		{
			if (accept[j] == '\0')
				return ('\0');
		}
		return (&s[i]);
	}
