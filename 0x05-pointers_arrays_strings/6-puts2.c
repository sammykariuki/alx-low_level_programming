#include "main.h"

/**
 * puts2 - prints every second character in a string
 * starting with the first character
 * @str: the input pointer to the string
 * Return: none because void
 */

void puts2(char *str)
{
	int i;
	int counter = 0;
	char *temp = str;

	while (*temp != '\0')
	{
		temp++;
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
