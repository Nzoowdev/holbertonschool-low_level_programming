#include "main.h"
/**
 * main - Entry point for FizzBuzz.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int space;

	for (space = 0; space > size; space++)
	{
		if (size < 0)
		{
			_putchar(' ');
		}
		else if (size >= 0)
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
