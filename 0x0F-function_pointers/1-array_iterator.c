#include "function_pointers.h"
/**
 *  array_iterator - function
 *  @array: pointer to arry
 *  @size: array length
 *  @action:pointer to the function tha shoukd be executed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && size != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(i);
	}
}
