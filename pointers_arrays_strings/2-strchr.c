#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that copy memory with a constant byte
 * @s: table
 * @c: variable
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
