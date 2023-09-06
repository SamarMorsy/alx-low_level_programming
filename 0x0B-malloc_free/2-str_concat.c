#include "main.h"
/**
 * str_concat - 2 srtings in 1
 * @s1: 1st
 * @s2: 2nd
 * Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int l1 = 0;
	int l2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		l1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		l2++;
		i++;
	}
	p = malloc(l1 + l2 + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i <= l2; i++)
	{
		if (i == L2)
			p[i + l1] = '\0';
		else
			p[i + l1] = s2[i];
	}
	return (p);
}
