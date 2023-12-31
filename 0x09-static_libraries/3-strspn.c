#include "main.h"
/**
 * _strspn - gets length of a prefix substring.
 *
 * @s: input pointer
 * @accept: input pointer
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				j++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
