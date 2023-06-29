#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?
 * double quote, opening or closing parenthesis
 * opening or closing curly brace
 *
 * @s: the string pointer
 * Return: the string pointer s for new string
 */

char *cap_string(char *s)
{
	int i, len = 0, separator = 1;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (separator && s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		separator = (s[i] == 32 || s[i] == 9 || s[i] == 10 ||
		s[i] == 44 || s[i] == 59 || s[i] == 46 ||
		s[i] == 33 || s[i] == 63 || s[i] == 39 ||
		s[i] == 40 || s[i] == 41 || s[i] == 123 ||
		s[i] == 125 || s[i] == 34);
		if (separator && i + 1 < len &&
		(s[i + 1] == 32 || s[i + 1] == 9 || s[i + 1] == 10 ||
		 s[i + 1] == 44 || s[i + 1] == 59 || s[i + 1] == 46 ||
		 s[i + 1] == 33 || s[i + 1] == 63 || s[i + 1] == 39 ||
		 s[i + 1] == 40 || s[i + 1] == 41 || s[i + 1] == 123 ||
		 s[i + 1] == 125 || s[i + 1] == 34))
		{
			separator = 1;
		}
	}
	return (s);
}
