#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: pointer to the concatenated string, or NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int str1 = 0, str2 = 0, i, j;

	if (s1 != NULL)
	{
		while (s1[str1] != '\0')
			str1++;
	}

	if (s2 != NULL)
	{
		while (s2[str1] != '\0')
			str2++;
	}

	concat = (char *)malloc((str1 + str2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < str2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[str1 + str2] = '\0';

	return (concat);
}