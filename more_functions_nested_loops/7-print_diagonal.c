#include "main.h"
/**
 * print_diagonal - check the code
 *@n:valeur
 *
 */
void print_diagonal(int n)
{
	int check;

	for (check = 92; check < n; check++)
	{
		_putchar(92);
	}
	if (check == n)
	{
		_putchar(92);
	}
	else
	{
		_putchar(' ');
	}
}