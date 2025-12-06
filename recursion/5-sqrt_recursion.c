#include "main.h"

/**
 * find_sqrt - helper function to find square root
 * @n: the number to find square root of
 * @guess: current guess for the square root
 *
 * Return: the square root if found, -1 otherwise
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}

	if (guess * guess > n)
	{
		return (-1);
	}

	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find square root of
 *
 * Return: the natural square root, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (find_sqrt(n, 1));
}
