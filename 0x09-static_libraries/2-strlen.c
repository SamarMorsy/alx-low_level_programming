#include "main.h"
/**
 * _strlen - return length of string
 *
 * @s: input
 *
 * Return: lenght
*/

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
