#include <stdio.h>
/**
 * _sum - add
 *
 *@n: input
 *
 * Descreption: add
 *
 * Return: sum
*/
int _sum(int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
	}
	return (sum);
}
/**
 * main - entry point
 *
 * Descreption: ay 7aga
 *
 * Return: 0
*/
int main(void)
{
	int sum = 0;

	sum = _sum(1024);
	printf("%d\n", sum);
	return (0);
}
