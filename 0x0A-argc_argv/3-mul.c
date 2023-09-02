#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: int
 * @argv: array
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i;

		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
