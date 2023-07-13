#include <stdlib.h>
#include "main.h"

/**
 * _concat - concatenates 2 strings to new allocated
 * location
 * @p: the location pointer
 * @s1: the 1st string pointer
 * @s2: the 2nd string pointer
 * @count1: the length of string 1
 * @count2: the length to be used of string 2
 */
void _concat(char *p, char *s1, char *s2, int count1, int count2)
{
	int i;

	for (i = 0; i < count1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < count2; i++)
	{
		p[count1 + i] = s2[i];
	}
}

/**
 * string_nconcat - concatenates two strings
 * second string only upto n bytes
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: the number of bytes of s2
 * Return: pointer to new sting, NULL for fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int count1 = 0, count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s2 + count2) != '\0')
		count2++;
	while (*(s1 + count1) != '\0')
		count1++;
	if (n >= count2)
	{
		ptr = malloc(sizeof(char) * (count1 + count2 + 1));
		if (ptr == NULL)
			return (NULL);
		_concat(ptr, s1, s2, count1, count2);
	}
	else
	{
		ptr = malloc(sizeof(char) * (count1 + n + 1));
		if (ptr == NULL)
			return (NULL);
		_concat(ptr, s1, s2, count1, n);
	}
	return (ptr);
}
