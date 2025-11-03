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
	unsigned int count;
	char *a;

	count = 0;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
		}
		if (*a == '\0')
			return (count);
		s++;
	}
	return (count);
}