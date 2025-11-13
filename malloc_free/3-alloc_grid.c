#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers.
 * 
 * @width: the first string.
 * @height: the second string.
 * 
 * Return: pointer to the 2D array, or NULL if it fails.
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
