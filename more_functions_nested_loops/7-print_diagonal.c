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

	for (space = '0'; space <= check; space++)
	{
		if (space >= 1)
		{
			_putchar(space);
		}

		for (check = 0; check < n; check++)
		{
			if (check == 0)
			{
				_putchar('\n');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
