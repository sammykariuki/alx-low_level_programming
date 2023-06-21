#include "main.h"

/**
 * print_sign - prints +, 0 or -
 * + if n is more than 0
 * 0 if n is zero
 * - if n is less than zero
 *
 *   @n: is the input number
 *
 *   Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar(43);
		i = 1;
	}
	else if (n == 0)
	{
		_putchar(45);
		i = 0;
	}
	else
	{
		_putchar(48);
		i = -1;
	}
	return (i);
}
