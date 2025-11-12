#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: character
 * Return: return pointer to array, or NULL if fails.
 */
char *_strdup(char *str)
{
	char *mystr = (char *)malloc(6);
	free(mystr);

	if (*mystr <= *str)
	{
		mystr++;
		return (str);
	}
	if (*str == NULL)
	{
		return (NULL);
	}
}