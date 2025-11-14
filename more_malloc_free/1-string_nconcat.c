#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, taking at most n bytes from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to take from s2
 *
 * Return: A pointer to the newly allocated concatenated string
 *         If memory allocation fails, return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *result;

	len1 = 0;
	len2 = 0;
