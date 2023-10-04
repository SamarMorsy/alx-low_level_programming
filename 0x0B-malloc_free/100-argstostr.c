#include "main.h"
/**
 * _strLen - i
 * @s: j
 * Return: 0
*/
int _strLen(char *s)
{
	int i = 0;
	int len = 0;
	while (s[i] != '\0')
		len++;
	return (len);
}
/**
 * argstostr - fun
 * @ac: count	
 * @av: args	
*/
char *argstostr(int ac, char **av)
{	
	int total_length = 0;
	char *strAll;
	int i;

	if (ac == 0 || av == NULL) 
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1; /* lenght of every string + \n*/
	}
	strAll = malloc((sizeof(char) * total_length) + 1);
	if (!strAll)
		return (NULL);
	for (int i = 0; i < ac; i++) 
	{
		strcpy(strAll + position, av[i]);
		position += strlen(av[i]);
		result[position] = '\n';
		position++;
	}
	result[total_length] = '\0';
	return (strAll);
}

