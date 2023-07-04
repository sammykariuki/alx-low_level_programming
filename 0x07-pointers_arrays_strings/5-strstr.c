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
	int i, j, k = 0, leng = 0;

	while (needle[leng] != '\0')
	{
		leng++;
	}
	for (i = 0; haystack[i + leng - 1] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = 1;

			for (j = 1; j < leng; j++)
			{
			if (haystack[i + j] == needle[j])
			{
				continue;
			}
			else
			{
				k = 0;
				break;
			}
			}
			if (k == 1)
				return (&haystack[i]);
		}
	}
	return (0);
}
