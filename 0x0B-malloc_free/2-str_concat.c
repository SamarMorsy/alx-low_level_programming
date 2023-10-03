#include "main.h"
/**
 * str_concat - fun
 * @s1: in 1
 * @s2: input 2
 * Return: str
*/
char *str_concat(char *s1, char *s2)
{
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	int i = 0;
	int j = 0;
	int l_s1 = 0;
	int l_s2 = 0;
	char *con;

	while (s1[i] != '\0')
	{
		l_s1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		l_s2++;
		i++;
	}
	con = malloc((sizeof(char) * (l_s1 + l_s2)) + 1);
	if (!con)
		return (NULL);
	for (i = 0; i < l_s1; i++)
	{
		con[i] = s1[i];
	}
	for (i = l_s1 ; i < (l_s1 + l_s2); i++)
	{
		con[i] = s2[j];
		j++;
	}
	con[i] = '\0';
	return (con);
}
