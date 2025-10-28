#include "main.h"
/**
 * print_line - check the code
 *
 * @n:variable
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int compteur;

	for (compteur = 0; compteur < n; compteur++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
