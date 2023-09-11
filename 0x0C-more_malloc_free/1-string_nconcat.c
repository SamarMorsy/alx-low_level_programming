#include "main.h"
/**
 * string_nconcat - functiion
 * @s1: input
 * @s2: input
 * @n:input
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int l1 = 0;
	unsigned int l2 = 0;
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
	if (n >= l2)
		n = l2;
	p = malloc(l1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
		p[i++] = s2[j];
	p[i] = '\0';
	return (p);
}
