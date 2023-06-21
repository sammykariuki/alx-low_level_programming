#include <stdio.h>

/**
 * main - prints sum of multiples
 * of 3 or 5 up to 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
