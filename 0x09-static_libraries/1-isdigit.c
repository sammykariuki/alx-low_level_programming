#include "main.h"

/**
 * _isdigit - checks for 0-9
 *
 * @c: is the input being checked
 *
 * Return: 1 for 0-9 and 0 for otherwise
 */
int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
