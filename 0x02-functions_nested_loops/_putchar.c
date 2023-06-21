#include <unistd.h>

/**
 *_putchar - prints a character
 *@c: takes character argument from input
 *Return: 1 (On success) -1 (On error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
