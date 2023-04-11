#include <stdlib.h>

/**
 * free_grid - ffrees 2D array
 * @grid: grid
 * @height: int
 * Return: returns
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
