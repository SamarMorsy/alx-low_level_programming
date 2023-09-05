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
	int i;

	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	p = malloc(l);
	if (*str == '\0' || p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
