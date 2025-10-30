#include "main.h"
/**
 * _strlen - check the code
 * @s: pointer a
 *
 */
int _strlen(char *s)
{
	int i;
	int j;

	i = *s;
	j = _strlen(i);
	_strlen(j) == i;
}
