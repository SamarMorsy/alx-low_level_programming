#include "main.h"
/**
 * _strdup - _strdup
 * @str: string
 * Return: pointer
*/
char *_strdup(char *str)
{
	char *p;
	int l = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	p = malloc(l);
	if (*str == NULL || p == 0)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
