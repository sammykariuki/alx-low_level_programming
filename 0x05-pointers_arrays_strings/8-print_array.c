#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of an integer array
 * separated by comma and space
 * @a: the pointer to the array
 * @n: the number of elements to be printed
 * Return: none because it's void
 */

void print_array(int *a, int n)
{
	int i;
	int temp = n - 1;
	char comma = ',';
	char space = ' ';

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != temp)
		{
			printf("%c%c", comma, space);
		}
	}
	printf("\n");
}
