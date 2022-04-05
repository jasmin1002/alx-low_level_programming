#include <stdlib.h>

/**
 * alloc_grid - makes 2-D array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
	int j, i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);

		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(grid[j]);

			free(grid);

			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			grid[j][i] = 0;

	}


	return (grid);
}
