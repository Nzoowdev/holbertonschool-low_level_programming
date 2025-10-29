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
		for (space = 0; space < n; space++)
		{
			if (check == space)
			{
				_putchar(92);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}