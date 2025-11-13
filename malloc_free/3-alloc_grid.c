#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers.
 *
 * @width: the first string.
 * @height: the second string.
 *
 * return - return code
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)

		return (NULL);

	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)

		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);

		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)

			grid[i][j] = 0;
	}
	return (grid);
}
