#include "main.h"

/**
 * _strstr - locates a substring in a string
 *
 * @haystack: pointer to the main string
 * @needle: the substring
 *
 * Return: pointer to substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
