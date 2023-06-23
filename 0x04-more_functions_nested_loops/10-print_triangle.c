#include "main.h"

/**
 * print_triangle - prints a triangle and a new line
 *
 * @size: the input of size of the triangle
 *
 * Return: none
 */

void print_triangle(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = i; k < size; k++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
