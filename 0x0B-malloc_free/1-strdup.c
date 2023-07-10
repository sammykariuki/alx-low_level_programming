#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocates space that has a duplicate of
 * given string
 *
 * @str: pointer to the original string
 *
 * Return: pointer to new string or NULL on failure
 */

char *_strdup(char *str)
{
	unsigned long int i;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = (char *)malloc(sizeof(char) * sizeof(str));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(str); i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
