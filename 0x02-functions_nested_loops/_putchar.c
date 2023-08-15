#include<unistd.h>
#include "main.h"
/**
 * _putchar - write the character c to stdout
 * @c: the character to be print
 *
 * Return: On Success 1.
 * On Error -1 is returned and error number is set approperiatly.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
