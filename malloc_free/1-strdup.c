#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: character
 * Return: return pointer to array, or NULL if fails.
 */
char *_strdup(char *str)
{
	char *mystr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}

	mystr = (char *)malloc((j + 1) * sizeof(char));
	
	if (mystr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		mystr[i] = str[i];
	}
	mystr[j] = '\0';

	return (mystr);
}