#include "main.h"
/**
 * print_line - check the code
 *
 *
 *
 */
void print_line(int n)
{
	int compteur;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (compteur = 0; compteur <= n; compteur++)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}
