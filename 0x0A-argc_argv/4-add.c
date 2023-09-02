#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc:int
 * @argv: array
 * Return:0
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int sum;
		int i;

		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
		printf("%d\n", sum);
	}
	return (0);
}
