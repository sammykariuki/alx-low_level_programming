#include "main.h"

/**
 * puts_half - prints the second half of a string
 * if odd number of characters (length - 1) / 2
 * @str: the input pointer to the string
 * Return: none because void
 */

void puts_half(char *str)
{
	int i, j;
	int counter = 0;
	char *second_half;

	while (*str != '\0')
	{
		str++;
		counter++;
	}
	if (counter % 2 != 0)
	{
		counter -= 1;
	}
	j = counter / 2;
	second_half = str - j;
	for (i = 0; i < j; i++)
	{
		_putchar(second_half[i]);
	}
	_putchar('\n');
}
