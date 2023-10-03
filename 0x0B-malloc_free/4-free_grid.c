#include "main.h"
/**
 * free_grid - fun
 * @grid: input
 * @height: input
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		if (!grid[i])
		{
			while (i--)
				free(grid[i]);
			free(grid);
		}
	}
}
