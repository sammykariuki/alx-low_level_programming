#include "main.h"

/**
 * _atoi - converts a string to become an integer
 *
 * @s:The string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, j, k, len, l, digit;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	l = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && l == 0)
	{
		if (s[i] == '-')
	{
		++j;
	}
	if (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		if (j % 2)
		digit = -digit;
		k = k * 10 + digit;
		l = 1;
		if (s[i + 1] < '0' || s[i + 1] > '9')
			break;
		l = 0;
	}
	i++;
	}
	if (l == 0)
		return (0);

	return (k);
}
