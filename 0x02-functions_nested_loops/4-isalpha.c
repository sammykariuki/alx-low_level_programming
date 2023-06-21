#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * checks for either lowercase or uppercase
 *
 * @c: input character in form of ascii number
 *
 * Return: 0 (for alphabet) 1 (for otherwise)
 */
int _isalpha(int c)
{
	int i;

	if (c >= 65 && c <= 90)
	{
		i = 1;
	}
	else if (c >= 97 && c <= 122)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
