#include "main.h"

/**
 * print_alphabet_x10 - prints the a-z alphabet
 * The alphabet is printed 10 times
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
