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
	char *p;

	if (size <= 0)
		return (NULL);
	p = malloc(size);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	if (p == NULL)
		return (NULL);
	return (p);

}
