#include "main.h"
int natural_sqrt(int n, int k);

/**
 * _sqrt_recursion - finds natural square root of a number
 *
 * @n: the number
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (natural_sqrt(n, 0));
	}
}

/**
 * natural_sqrt - finds the squre root by testing
 * multiplication
 *
 * @n: the number
 * @k: the guess starting point
 *
 * Return: the recursion
 */

int natural_sqrt(int n, int k)
{
	if (k * k > n)
	{
		return (-1);
	}
	if (k * k == n)
	{
		return (k);
	}
	return (natural_sqrt(n, k + 1));
}
