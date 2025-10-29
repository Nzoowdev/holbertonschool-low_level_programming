#include "main.h"
/**
 * print_diagonal - check the code
 *@size:valeur
 *
 */
void print_square(int size)
{
	int longueur, largeur = 0;

	if (size == 0)
	{
		_putchar('\n');
	}
	for (longueur = 0; longueur <= size; longueur++)
	{
		for (largeur = 0; largeur <= longueur; largeur++)
		{
			if (largeur < size)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}