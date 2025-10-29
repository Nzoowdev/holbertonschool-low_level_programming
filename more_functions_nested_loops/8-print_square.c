#include "main.h"
/**
 * print_square - check the code
 *@size:valeur
 *
 */
void print_square(int size)
{
	int longueur, largeur = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (longueur = 0; longueur < size; longueur++)
	{
		for (largeur = 0; largeur <= size; largeur++)
		{
			if (largeur < size)
			{
				_putchar('#');
			}
			else if (size < 0)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
