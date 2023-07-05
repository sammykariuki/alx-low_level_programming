#include "main.h"

/**
 * _pow_recursion - finds the power of a value
 *
 * @x: the value
 * @y: the power to be raised to
 *
 * Return: the power or -1 for error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
