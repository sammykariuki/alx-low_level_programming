#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: the input string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length += 1;
		s++;
	}
	return (length);
}
