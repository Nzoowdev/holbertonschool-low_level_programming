#include "main.h"
/**
 * _puts - Returns the length of a string
 * @str: Pointer to the string
 *
 * Return: Length of the string
 */
void _puts(char *str)
{
	char string = *str;
	char *i;

	i = string;

	_puts(string);
	_puts('\n');
}
