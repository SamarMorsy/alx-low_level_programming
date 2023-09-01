#include "main.h"
/**
 * _strlen_recursion - return str lenght
 * @s:input
 * Return: l
*/
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		_strlen_recursion(char s);
			l++;
	}
	return (l);
}
