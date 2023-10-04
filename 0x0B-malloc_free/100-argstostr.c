#include "main.h"
#include "string.h"
/**
 * argstostr - fun
 * @ac: count
 * @av: args
 * Return: result
*/
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	char *strAll;
	int i;
	int position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1; /* lenght of every string + \n*/
	}
	strAll = malloc(total_length + 1);
	if (!strAll)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcpy(strAll + position, av[i]);
		position += strlen(av[i]);
		strAll[position] = '\n';
		position++;
	}
	strAll[total_length] = '\0';
	return (strAll);
}

