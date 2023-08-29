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

	while (s[i] != '\0')
	{
		if (c == s[i])
			return (&s[i]);
		i++;
	}
	return (NULL);
}
