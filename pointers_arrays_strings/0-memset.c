#include "main.h"
#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: table
 * @b: variable
 * @n: taille
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
