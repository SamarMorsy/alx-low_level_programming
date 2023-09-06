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
