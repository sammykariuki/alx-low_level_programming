#include "main.h"

/**
 * swap_int - it swaps the values of 2 integers
 * using their pointers
 *
 * @a: the first integer
 *
 * @b: the second integer
 *
 * Return: none because it's void
 */

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
