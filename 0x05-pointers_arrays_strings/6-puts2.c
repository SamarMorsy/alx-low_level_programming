#include "main.h"

/**
 * puts2 - print every other char in string
 *
 * @str: input
 *
 * Return: void
*/
void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;
	for (i = 0; i < length; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
