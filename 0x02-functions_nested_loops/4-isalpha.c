#include "main.h"
/**
 *  _isalpha - check for alphabet
 *  @c: input
 *
 *  Return: 1 is alphabet , 0 is not
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
				}
