#include "main.h"

/**
 * free_grid - frees a 2-D grid
 *
 * @grid: pointer to 2-D grid to be freed
 * @height: height of 2-D grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}

	free(grid);
}
