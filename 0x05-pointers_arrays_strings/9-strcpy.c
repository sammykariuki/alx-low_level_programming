#include "main.h"

/**
 * _strcpy - copies a string to a destination
 * @src: the source being copied from
 * @dest: the destination after copying
 * Return: the pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
