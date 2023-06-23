#include "main.h"

/**
 * print_square - Prints a square with '#'
 *
 * @size: this is the input for size of square
 *
 * Return:none because it is void
 */

void print_square(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
