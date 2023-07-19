#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 *
 * @array: The array
 * @size: The size of elements in array
 * @cmp: The pointer to func of one of the 3 in main
 *
 * Return: zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
