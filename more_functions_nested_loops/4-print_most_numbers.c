#include "main.h"
/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int calc;

	for (calc = 0; calc <= 9; calc++)
	{
		if ((calc != 2) && (calc != 4))
		{
			_putchar(calc + '0');
		}
	}
	_putchar('\n');
}
