#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the pointer of the first string
 * @s2: the pointer of the second string
 * Return: 0 for equal,+ve for s2>s1,-ve for s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0, j = 0, i, n = 0;
	char c1, c2;

	while (*(s1 + k) != '\0')
		k++;
	while (*(s2 + j) != '\0')
		j++;
	if (j >= k)
		n = j;
	else
		n = k;
	for (i = 0; i < n; i++)
	{
		c1 = s1[i];
		c2 = s2[i];
		if (c1 == '\0' && c2 != '\0')
		{
			return (-15);
		}
		else if (c1 != '\0' && c2 == '\0')
		{
			return (15);
		}
		else if (c1 != c2)
		{
			return (c1 - c2);
		}
	}
	return (0);
}
