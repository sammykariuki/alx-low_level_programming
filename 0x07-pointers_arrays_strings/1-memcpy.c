#include "main.h"

/**
 * _memcpy - copies n bytes from source to destination
 *
 * @dest: The pointer to the destination
 * @src: The pointer to the source
 * @n: The number of bytes
 *
 * Return: dest, the pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
