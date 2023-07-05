#include "main.h"

/**
 * _puts_recursion - prints string
 *
 * @s: pointer to string
 *
 * Return: none
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
