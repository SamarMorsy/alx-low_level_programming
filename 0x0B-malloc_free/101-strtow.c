#include "main.h"
#include "string.h"
/**
 * strtow - fi
 * @str: jj#
 * Return: j
*/
char **strtow(char *str)
{
	int i = 0;
	char **result;
	char *tocken;
	char *remainder = str;
	int nWords = 0;

	if (str == NULL)
		return (NULL);
	tocken = strtok(str, " ");
	while (tocken != NULL)
	{
		nWords++;
		tocken = strtok(NULL, " ");
	}
	result = malloc(nWords * sizeof(char *) + 1);
	if (result == NULL)
		return (NULL);
	while ((token = strtok(remainder, " ")) != NULL)
	{
		result[i] = strdup(token);
		i++;
		remainder = NULL;
	}
	result[nWords] = NULL;
	return (result);
}
