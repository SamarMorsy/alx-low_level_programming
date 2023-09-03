#include "main.h"
/**
 * factorial - calculate factorial
 * @n : int
 * Return: int
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (1 * factorial(n - 1));
}
