#include "main.h"
#include "string.h"
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
	for (i = 0; i < ac; i++) 
	{
		strcpy(strAll + position, av[i]);
		position += strlen(av[i]);
		result[position] = '\n';
		position++;
	}
	result[total_length] = '\0';
	return (strAll);
}

