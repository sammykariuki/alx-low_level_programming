#include "main.h"

/**
 * rev_string - it reverses a string
 * @s: input of pointer to the string
 * Return: none because it's void
 */

void rev_string(char *s)
{
	char temp = s[0];
	int i, counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		temp = s[i];
		s[i] = s[counter];
		s[counter] = temp;
	}
}
