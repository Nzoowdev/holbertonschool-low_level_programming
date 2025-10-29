#include "main.h"
/**
 * print_square - check the code
 *
 */
int main(void)
{
	int min1;
	int min2 = '*3';
	int min3 = '*5';
	int resultat = min2 + min3;

	for (min1 = 1; min1 <= 100; min1++)
	{
		if (min2 < '*3')
			_putchar('Fizz');

		if (min3 < '*5')
			_putchar('Buzz');
	}

	return (0);
}
