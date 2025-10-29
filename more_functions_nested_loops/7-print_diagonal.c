#include "main.h"
/**
 * print_diagonal - check the code
 *@n:valeur
 *
 */
void print_diagonal(int n)
{
	int check;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (check = 92; check < n; check++)
	{
		_putchar(92);
	}
	if (n <= 92)
	{
		_putchar('0');
	}
}