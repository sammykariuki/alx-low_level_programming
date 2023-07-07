#include "main.h"

/**
 * _puts - prints a string to stdoutput
 * followed by a new line
 * @str: the input pointer to the first element
 * string
 * Return: none because it's void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
