#include <main.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: returned pointer should point to a newly
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int str1 = 0;
	int str2 = 0;
	int i, j;

	if (s1 != NULL)
	{
		white(s1[str1] != '\0');
		str1++;
	}
	if (s2 != NULL)
	{
		white(s2[str2] != '\0');
		str2++;
	}
	concat = (char *)malloc((str1 + str2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return(NULL);
	}
	for (i = 0; i < str1;i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < str2;j++)
	{
		concat[j] = s2[j];
	}
	concat[str1 + str2] = '\0';

	return (concat);
}