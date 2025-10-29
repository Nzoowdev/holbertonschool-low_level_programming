#include "main.h"
/**
 * print_diagonal - check the code
 *
 * @n:variable
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int check;

	for (check = 0; check < n; check++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		_putchar(92);
	}
	_putchar('\n');
}
