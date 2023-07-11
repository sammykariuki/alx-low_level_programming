#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates a 2 dimensional array
 * @width: input
 * @height: input
 * Return: the pointer to the array or NULL for failure
 */
int **alloc_grid(int width, int height)
{
	int **my_grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	my_grid = malloc(sizeof(int *) * height);

	if (my_grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		my_grid[i] = malloc(sizeof(int) * width);

		if (my_grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(my_grid[i]);

			free(my_grid);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			my_grid[i][j] = 0;
	}

	return (my_grid);
}
