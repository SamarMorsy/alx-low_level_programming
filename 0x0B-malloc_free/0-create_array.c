#include "main.h"
/**
 * create_array - func
 * @size: size of array
 * @c: to intailize
 * Return: pointer to char array
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
        unsigned int i;


	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (!arr)
		return (NULL);
	for (i = 0; i < size ; i++)
		arr[i] = c;
	return (arr);
}
