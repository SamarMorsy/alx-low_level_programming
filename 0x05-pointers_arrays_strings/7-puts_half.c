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
	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length / 2) + 1;
	for (i = start_index; i < length ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
