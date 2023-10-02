#include "main.h"

/**
 * _isupper - check upper case
 * @c: input
 * Return: 1 ia upper 0 if lower
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

