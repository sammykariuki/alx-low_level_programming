#include "main.h"

/**
 * print_times_table - Prints the table for the input
 * starting point in 0
 *
 * @n: The number of the table to be printed
 */

void print_times_table(int n)
{
	int product, num, m;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (m = 1; m <= n; m++)
	{
	_putchar(',');
	_putchar(' ');
	product = num * m;
	if (product <= 99)
	_putchar(' ');
	if (product <= 9)
	_putchar(' ');
	if (product >= 100)
	{
	_putchar((product / 100) + '0');
	_putchar(((product / 10)) % 10 + '0');
	}
	else if (product <= 99 && product >= 10)
	{
	_putchar((product / 10) + '0');
	}
	_putchar((product % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
