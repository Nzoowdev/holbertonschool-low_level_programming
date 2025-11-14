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

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}

	if (n < len2)
	{
		len2 = n;
	}

	result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = s2[i];
	}

	result[len1 + len2] = '\0';

	return (result);
}
