#include "main.h"

/**
 * print_last_digit - it prints the last digit
 * gets remainder when number is divided by 10
 * because it is always same as last digit
 *
 * @i: the number being checked
 *
 * Return: returns the last digit
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		j *= -1;
	}
	_putchar(j + '0');
	return (j);
}
