#include "main.h"

/**
 * print_number - prints integers
 *
 * @n: The integer to be printed
 *
 * Return: none
 */

void print_number(int n)
{
	unsigned int num1;

	if (n < 0)
	{
		num1 = -n;
		_putchar('-');
	}
	else
	{
		num1 = n;
	}
	if (num1 / 10)
	{
		print_number(num1 / 10);
	}
	_putchar((num1 % 10) + '0');
}
