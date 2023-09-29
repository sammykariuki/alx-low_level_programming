#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * checker - check if string contains only digits
 *
 * @str: array str
 *
 * Return: 1 if all digits, 0 otherwise
 */

int checker(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - Prints the name of the program
 *
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 for Success
 */

int main(int argc, char *argv[])
{
	int c;
	int string_int;
	int sum = 0;

	c = 1;
	while (c < argc)
	{
		if (checker(argv[c]))
		{
			string_int = atoi(argv[c]);
			sum += string_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", sum);

	return (0);
}
