#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that copy memory with a constant byte
 * @s: table
 * @accept: variable
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;

	while (a = accept)
	{
		s[a] = accept;
	}

	return (s);
}