#include "main.h"

/**
 * check_divisor - checks if n is divisible by divisor
 * @n: the number to check
 * @divisor: current divisor to test
 *
 * Return: 1 if prime, 0 if not prime
 */
int check_divisor(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (check_divisor(n, divisor + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (check_divisor(n, 2));
}
