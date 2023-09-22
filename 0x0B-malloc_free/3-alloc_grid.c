#include "main.h"
/**
 * alloc_grid - 2 dimentional array
 * @width: int
 * @height: int
 * Return: pointer to pointer
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int) * (width * height));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
#include "main.h"
#include <stdlib.h>
int **alloc_grid(int width, int height) 
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0) return (NULL);
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);
		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);
			free(mee);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}
	return (mee);
}


