#include "main.h"
/**
 * puts_half - print second halve of string
 * @str:input
*/

void puts_half(char *str)
{
	int length = 0;
	int start_index;
	int i;

	while (str[length] != '\0')
		length++;
	start_index = length / 2;
	for (i = start_index; i < length ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
