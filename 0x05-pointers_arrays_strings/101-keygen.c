#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -A program that generates random and valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 for Success
 */

int main(void)
{
	int pass_words[100];
	int i, sum, j;

	sum = 0;

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		pass_words[i] = rand() % 78;
		sum += (pass_words[i] + '0');
		putchar(pass_words[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}
