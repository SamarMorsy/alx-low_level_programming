#include <unistd.h>
#include <main.h>
/**
 * _putchar - write the character c to the stdout
 * @c: the character to be printed
 *
 * Return: onSuccess 1.
 * onError, -1
*/
int _putchar(char c)
{i
	return (write(1, &c, 1));
}
