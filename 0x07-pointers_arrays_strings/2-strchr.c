#include "main.h"
/**
 * _strchr - char search
 * @s: string
 * @c: char
 * Return: pointer to char
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[0] == '\0')
		return ('\0');

	if (c != '\0')
	{
		while (s[i] != '\0')
		{
			if (c == s[i])
				return (&s[i]);
			i++;
		}
	}
	else if (c == '\0')
		return ('\0');
	return ('\0');
}
