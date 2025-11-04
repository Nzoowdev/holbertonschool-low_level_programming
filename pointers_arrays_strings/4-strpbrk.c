#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function that copy memory with a constant byte
 * @s: table
 * @accept: variable
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{

	char *i;

	while (*s)
	{
		for (i = accept; *i; i++)
		{
			if (*s == *i)
				return (s);
		}
		s++;
	}
	return (NULL);
}
