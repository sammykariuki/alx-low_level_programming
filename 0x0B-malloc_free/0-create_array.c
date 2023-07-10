#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character it initializes with
 * Return: a character pointer to the array created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
