#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: int
 * @argv:pointer to array of strings
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		int leastCents = 0;
		int mony = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (mony >= cents[i])
			{
				leastCents += mony / cents[i];
				mony = mony % cents[i];
				if (mony % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastCents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
