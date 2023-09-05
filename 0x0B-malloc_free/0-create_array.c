#include "main.h"
/**
 * create_array - create_array
 * @size: array length
 * @c: char
 * Return: pointer to char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size);

	if (size <= 0 || p == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
