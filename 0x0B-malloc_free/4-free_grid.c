#include <stdio.h> 
#include <stdlib.h> 
#include "main.h"
/**
 * free_grid - function
 * @grid: inr
 * @height: dd
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
