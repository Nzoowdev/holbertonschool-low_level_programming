#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - check the code
 *@s: pointer
 *@b: variable
 *@n: variable
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (*s);
}