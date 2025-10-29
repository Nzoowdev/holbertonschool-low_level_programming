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

	for (check = 92; check < n; check++)
	for (space = ' '; space < n; space++)
	{
		_putchar(92);
	}
	if (check == space)
	{
		_putchar(92);
	}
	else
	{
		_putchar(' ');
	}
	_putchar('\n');
}