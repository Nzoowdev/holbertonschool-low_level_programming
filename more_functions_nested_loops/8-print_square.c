#include "main.h"
/**
 * print_diagonal - check the code
 *@size:valeur
 *
 */
void print_square(int size)
{
	int longueur, largeur = 0;

	for (longueur = 0; longueur <= size; longueur++)
	{
		for (largeur = 0; largeur <= longueur; largeur++)
		{
			if (largeur == 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}