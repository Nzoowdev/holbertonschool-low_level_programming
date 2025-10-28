#include "main.h"
/**
 * print_diagonal - check the code
 *@n:valeur
 * 
 */
void print_diagonal(int n)
{
	int check;

	for (check = 0; check < n; check++)
	{
		if (check == 0)
		{
			_putchar('\n');
		}
		else if (check <= 0)
		_putchar('0');
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
