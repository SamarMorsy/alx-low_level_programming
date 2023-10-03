#include "main.h"
/**
 * _strdup - func
 * @str: str to cop
 * Return: pointer to new str
*/
char *_strdup(char *str)
{
	char *new_str;
	int i;
	int len;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	
	new_str = malloc((sizeof(char) * len) + 1);
	if (!new_str)
		return (NULL);

	for (i = 0; i <= len; i++)
		new_str[i] = str[i];
	return (new_str);
}
