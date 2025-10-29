#include "main.h"
/**
 * print_square - check the code
 *
 */
int main(void)
{
	int min1;
	int min2;
	int min3;
	int resultat;

	for (min1 = 1; min1 <= 100; min1++)
	{
		for (min2 = 0; min2 <= 100; min2++)
		{
			if (min2 < 100)
				;
			_putchar("'*3' Fizz");
		}
		for (min3 = 0; min3 <= 100; min3++)
		{
			if (min3 < 100)
				;
			_putchar("'*5' Buzz");
		}
	}
	return (0);
}