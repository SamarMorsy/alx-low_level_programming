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

	if(*str == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	p = malloc(l);
	if (p == 0)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
