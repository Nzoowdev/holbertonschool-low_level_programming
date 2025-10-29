#include "main.h"
/**
 * main - check the code
 *
 */
int main(void)
{
	int min1;

	for (min1 = 1; min1 <= 100; min1++)
	{
		if (min1 == 15)
		{
			_putchar("FizzBuzz");
		}
		else if (min1 == 5)
		{
			_putchar("Buzz");
		}
		else if (min1 == 3)
		{
			_putchar("Fizz");
		}
		if (min1 == 0)
		{
			_putchar(min1);
			_putchar('\\');
		}
	}

	return (0);
}
