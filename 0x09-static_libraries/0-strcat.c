#include "main.h"

/**
 * _strcat - the function concatenates two strings
 * appends the src to the dest string
 * @dest: the destination string
 * @src: the first string
 *
 * Return: pointer to the dest string
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; i < k + 1; i++)
	{
		dest[l] = src[i];
		l++;
	}
	return (dest);
}
