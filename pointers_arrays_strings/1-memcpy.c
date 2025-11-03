#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copy memory with a constant byte
 * @dest: table
 * @src: variable
 * @n: taille
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= src; i++)
	{
			dest[i] = src[i];
	}
	return (dest);
}
