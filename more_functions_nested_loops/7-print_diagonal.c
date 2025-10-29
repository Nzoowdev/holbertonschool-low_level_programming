#include "main.h"
/**
 * print_diagonal - check the code
 *@n:valeur
 *
 */
void print_diagonal(int n)
{
	int check, space;

	if (n > 0)
	{
		for (check = 0; check < n; check++)
		{
			for (space = 0; space < check; space++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}