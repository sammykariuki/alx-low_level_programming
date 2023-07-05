#include "main.h"

/**
 * factorial - gives factorial of given number
 *
 * @n: the number
 *
 * Return: The factorial.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
