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
	int arr[width][height];
	if (arr == NULL)
	{
		return (NULL);
	}
	return arr;
}