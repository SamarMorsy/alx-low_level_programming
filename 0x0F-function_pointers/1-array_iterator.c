#include "function_pointers.h"
#include <stdlib.h>
/**
 *  array_iterator - function
 *  @array: pointer to arry
 *  @size: array length
 *  @action:pointer to the function tha shoukd be executed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action && size)
	{
		int length =(int)( size / sizeof(array[1]));
		for (i = 0; i < length; i++)
			action(array[i]);
	}
}
