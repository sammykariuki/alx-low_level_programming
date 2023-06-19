#include <stdio.h>

/**
 * main - the entry point
 *
 * it prints all possible combinations of two two-digit numbers
 *
 * Return: Should always return 0
 */
int main(void)
{
	int i;
	int k;

	for (i = 0; i < 100; i++)
	{
		for (k = 0; k < 100; k++)
		{
			if (i < k)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				if (i != 98 || k != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
