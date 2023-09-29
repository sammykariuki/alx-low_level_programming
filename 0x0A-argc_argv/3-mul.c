#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: The string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i = 0, j = 0, k = 0, length, m, d;

	length = 0;
	m = 0;
	d = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && m == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (j % 2)
				d = -d;
			k = k * 10 + d;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (k);
}

/**
 * main - It multiplies two numbers
 *
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 for Success), 1 for Error
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
