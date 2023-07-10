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
	int i, j = 0;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + j) != '\0')
	{
		j++;
	}
	new_str = (char *)malloc(sizeof(char) * (j + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
