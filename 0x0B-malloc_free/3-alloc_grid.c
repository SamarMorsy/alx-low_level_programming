#include "main.h"
/**
 * alloc_grid - fun
 * @width: w
 * @height: h
 * Return: arr
*/
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **grid;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	grid = malloc(sizeof(*grid) * height); /* height is the number of rows*/
	if (!grid)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);
	}
	if (!grid)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
