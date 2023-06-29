#include "main.h"

/**
 * _strncpy - copies strings with a limit of bytes
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes or characters
 *
 * Return: the pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, k;

	k = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	if (k <= n)
	{
	for (i = 0; i < k + 1; i++)
	{
		dest[i] = src[i];
	}
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[n] = '\0';
	}
	return (dest);
}
