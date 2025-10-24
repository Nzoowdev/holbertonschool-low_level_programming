#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int min)

{
	if (min >= 'a' && min <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
