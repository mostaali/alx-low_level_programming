#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid function.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Return: No return value (void).
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
