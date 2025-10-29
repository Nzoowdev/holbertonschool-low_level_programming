#include "main.h"
/**
 * main - check the code
 *
 */
int main(void)
{
	int min1;
	char FizzBuzz;
	char Buzz;
	char Fizz;

	for (min1 = 1; min1 <= 100; min1++)
	{
		if (min1 % 15 == 0)
		{
			_putchar(FizzBuzz);
		}
		else if (min1 % 5 == 0)
		{
			_putchar(Buzz);
		}
		else if (min1 % 3 == 0)
		{
			_putchar(Fizz);
		}
		else
		{
			_putchar("%d", min1);
		}
		if (min1 < 100)
		{
			_putchar(" ");
		}
	}

	return (0);
}
