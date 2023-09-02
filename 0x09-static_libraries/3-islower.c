#include "main.h"
/**
 * _islower - check for lower alphabet
 * @c: input
 *
 * Descreption: check fo lower
 *
 * Return: 1 is low , 0 is not low
*/
int _islower(int c)
{
	if (c <= 123 && c >= 97)
		return (1);
	else
		return (0);
}
