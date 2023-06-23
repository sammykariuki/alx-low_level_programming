#include "main.h"

/**
 * print_line - Prints a line with _
 *
 * @n: the length of the line
 *
 * Return:none because its void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;

		for (k = 0; k < n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
