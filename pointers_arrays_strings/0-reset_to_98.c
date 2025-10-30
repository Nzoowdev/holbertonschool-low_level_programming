#include "main.h"
/**
 * reset_to_98 - check the code
 *
 */
void reset_to_98(int *n)
{
	int i;
	i = n;
	n = &i;
	*n = 98;
}
