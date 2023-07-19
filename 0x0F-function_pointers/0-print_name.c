#include "function_pointers.h"

/**
 * print_name - It prints a name
 *
 * @name: pointer to array holding name
 * @f: pointer to a function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	int c = 0;

	while (*(name + c) != '\0')
	{
		c++;
	}
	if (c == 0)
		name = "";
	if (f == NULL)
		return;
	f(name);
}
