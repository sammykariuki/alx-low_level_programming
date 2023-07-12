#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 *
 * @argc: number of arguments
 * @argv: array of the arguments
 *
 * Return: Always 0 for Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
