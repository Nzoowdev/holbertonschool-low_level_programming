#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print table
 * @a: table
 * @size:
 * Return: always 0
 */
void print_diagsums(int *a, int size);
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		i += *(a + i * size + i);
		j += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum1, sum2);
}