#include "main.h"
/**
 * _pow_recursion - x power y
 * @x: int
 * @y: int
 * Return: int
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (n * _pow_recursion(n - 1));
