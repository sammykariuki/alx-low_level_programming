#include "main.h"

/**
 * _islower - check if c is lower case
 * checks if it is between ascii 97-122
 * @c: The letter is received as ascii number
 * Return: 1 (if it is lowercase)
 * 0 (if otherwise)
 */
int _islower(int c)
{
	int i;

	if (c >= 97 && c <= 122)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
