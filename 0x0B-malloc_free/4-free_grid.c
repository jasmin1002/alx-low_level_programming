#include <stdlib.h>

/**
 * free_grid - frees a 2-D array
 * @grid: an input 2-D array
 * @height: number of row of given array
 *
 * Return: Void (nothing)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);

		grid[i] = NULL;
	}

	free(grid);
	grid = NULL;
}
