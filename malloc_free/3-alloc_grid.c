#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers.
 *
 * @width: the first string.
 * @height: the second string.
 *
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
}