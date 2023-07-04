#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * @a: input pointer
 * @size: input for size
 *
 * Return: none because void
 */

void print_diagsums(int *a, int size)
{
	int sum_1, sum_2, i;

	sum_1 = 0;
	sum_2 = 0;
	for (i = 0; i < size; i++)
	{
		sum_1 = sum_1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum_2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
