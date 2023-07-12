#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 *
 * @argc: number of arguments
 * @argv: array of the arguments
 *
 * Return: Always 0 for Success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
