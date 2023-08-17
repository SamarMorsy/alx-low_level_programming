/**
 * _50_fibonacci - calculate
 *
 * Return: void
*/
#include <stdio.h>
void  _50_fibonacci(void)
{
	int i;
	long int first = 1;
	long int second = 2;
	long int current = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);
	for (i = 3; i <= 50; i++)
	{
		if (i == 50)
			printf("%lu\n", current);
		else
			printf("%lu, ", current);
		first = second;
		second = current;
		current = first + second;
	}

}
/**
 * main - entry point
 * Return: 0
*/
int main(void)
{
	_50_fibonacci();
	return (0);
}
