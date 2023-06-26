#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input of first pointer of string
 * Return: none because it's void
 */

void print_rev(char *s)
{
	int counter, i;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	s -= 1;
	for (i = 0; i < counter; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
