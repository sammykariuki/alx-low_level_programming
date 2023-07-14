#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - It concatenates n bytes of a string to another string
 *
 * @s1: The string to append to
 * @s2: The string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, k = 0, count1 = 0, count2 = 0;

	while (s1 && s1[count1])
		count1++;
	while (s2 && s2[count2])
		count2++;

	if (n < count2)
		s = malloc(sizeof(char) * (count1 + n + 1));
	else
		s = malloc(sizeof(char) * (count1 + count2 + 1));

	if (!s)
		return (NULL);

	while (i < count1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < count2 && i < (count1 + n))
		s[i++] = s2[k++];

	while (n >= count2 && i < (count1 + count2))
		s[i++] = s2[k++];

	s[i] = '\0';

	return (s);
}
