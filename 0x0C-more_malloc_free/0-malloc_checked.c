#include "main.h"
/**
 * malloc_checked - function
 * @b: int
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
