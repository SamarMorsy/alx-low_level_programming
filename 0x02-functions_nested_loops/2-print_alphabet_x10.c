#include "main.h"
/**
 *  print_alphabet_x10 - print from a-z ten times
 *
 *  Descreption: print from a-z ten zimes
 *
 *  Return: Void
*/
void print_alphabet_x10(void)
{
	int i = 0;
	int j ;
	do
       	{
		for(j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');

	}
	while(i < 10);
}
