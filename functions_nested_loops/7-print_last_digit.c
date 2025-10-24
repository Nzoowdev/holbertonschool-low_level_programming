#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int pld = n % 10;

	if (pld < 0)
		pld = -pld;

	_putchar(pld + '0');

	return (pld);
}