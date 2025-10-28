#include "main.h"
/**
 * print_diagonal - check the code
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
		_putchar(92);
	}
	_putchar('\n');
}
