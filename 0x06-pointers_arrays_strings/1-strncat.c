#include "main.h"

/**
 * _strncat - concatenates two strings
 * it will at most use n bytes from src and
 * src does not need to be null-terminated if it contains n or
 * more bytes
 *
 * @dest: the destination string
 * @src: the string being concatenated to dest
 * @n: the number of bytes
 *
 * Return: the resulting pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l, k;

	l = 0;
	k = 0;
	while (*(dest + l) != '\0')
	{
		l++;
	}
	while (*(src + k) != '\0')
	{
		k++;
	}
	if (k <= n)
	{
	for (i = 0; i < k + 1; i++)
	{
		dest[l] = src[i];
		l++;
	}
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		dest[l] = src[i];
		l++;
	}
	dest[l] = '\0';
	}
	return (dest);
}
