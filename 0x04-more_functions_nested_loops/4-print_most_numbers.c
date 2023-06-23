#include "main.h"

/**
 * print_most_numbers - prints 0-9
 * except 2 and 4
 *
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(48 + i);
		}
	}
	_putchar('\n');
}
