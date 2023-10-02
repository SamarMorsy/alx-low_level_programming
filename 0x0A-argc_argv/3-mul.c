#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: m
 * @argv:c
 * Return: 0
*/
int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int sum;

		sum = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", sum);
	}
	return (0);
}
