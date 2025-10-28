#include "main.h"
/**
 * print_diagonal - check the code
 *@n:valeur
 *
 */
void print_diagonal(int n)
{
	int check;
	int space;
	for (check = 0; check < n; check++)
	{
		if (check == 0)
		{
			_putchar('\n');
		}
		for (space = '0'; space < check; space++)
		{
			_putchar(space);
		}
		_putchar(92);
		_putchar('\n');
	}
}
