#include <stdlib.h>
#include "main.h"
/**
 * str_concat - it concatenates 2 strings to a new
 * allocated memory
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to new string or NULL for failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, k = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + j) != '\0')
		j++;
	while (*(s2 + k) != '\0')
		k++;
	string = (char *)malloc(sizeof(char) * (j + k + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		string[i] = s1[i];
	}
	for (i = 0; i < k; i++)
	{
		string[j] = s2[i];
		j++;
	}
	return (string);
}
