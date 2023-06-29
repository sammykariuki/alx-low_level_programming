#include "main.h"

/**
 * string_toupper - changes lowecase letters of
 * string to uppercase
 * @s: the string pointer
 * Return: the changed string s.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
