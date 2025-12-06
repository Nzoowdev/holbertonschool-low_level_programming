#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (separators[i] != '\0')
	{
		if (c == separators[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;
	int capitalize_next;

	i = 0;
	capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		if (is_separator(str[i]))
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}

		i++;
	}

	return (str);
}
