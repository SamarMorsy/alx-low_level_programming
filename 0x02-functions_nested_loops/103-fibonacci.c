/**
 * main - entry point
 *
 * Return: 0
*/
#include <stdio.h>
int main(void)
{
	long int sum = 2;
	long int first = 1;
	long int second = 2;
	long int current = first + second;

	do {
		if ((current % 2) == 0)
		{
			sum += current;
		}
		first = second;
		second = current;
		current = first + second;
	} while (current <= 4000000);
	printf("%lu\n", sum);
	return (0);
}
