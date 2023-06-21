#include "main.h"

/**
 * _abs - it establishes absolute value
 * of the input
 *
 * @i: the input
 *
 * Return: the absolute value (no sign)
 */
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
	}
	return (i);
}
