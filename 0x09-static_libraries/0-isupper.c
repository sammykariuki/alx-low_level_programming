#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: the input to be checked
 *
 * Return: 1 for uppercase 0 for otherwise
 */
int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
