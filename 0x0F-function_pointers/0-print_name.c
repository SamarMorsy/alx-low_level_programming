#include "function_pointers.h"
/**
 * print_name - function
 * @name: string (pointer to char)
 * @f: pointer to function tha taks pointer to char
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
