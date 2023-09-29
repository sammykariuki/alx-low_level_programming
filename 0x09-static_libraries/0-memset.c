#include "main.h"

/**
 * _memset - it fills a memory block with specific value
 *
 * @s: the pointer to the memory to be filled
 * @b: This is the desired value to be filled
 * @n: The number of bytes to be changed
 *
 * Return: the new array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
