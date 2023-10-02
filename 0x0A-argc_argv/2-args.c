#include <stdio.h>
/**
 * main - entry
 * @argc: num of argument
 * @argv: list of argument
 * Return: 0
*/
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0, i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}
}
