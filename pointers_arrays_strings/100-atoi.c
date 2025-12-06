#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value, or 0 if no numbers in string
 */
int _atoi(char *s)
{
	int i, sign, result, digit;
	int started;

	i = 0;
	sign = 1;
	result = 0;
	started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && started == 0)
		{
			sign = -sign;
		}
		else if (s[i] == '+' && started == 0)
		{
			/* Plus sign doesn't change anything */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			digit = s[i] - '0';
			
			if (result > 0)
			{
				result = -result;
			}
			
			if (sign < 0)
			{
				result = result * 10 - digit;
			}
			else
			{
				result = result * 10 + digit;
			}
		}
		else if (started == 1)
		{
			break;
		}
		i++;
	}

	if (sign < 0 && result > 0)
	{
		result = -result;
	}
	else if (sign > 0 && result < 0)
	{
		result = -result;
	}

	return (result);
}