#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: is a pointer to a pointer
 * @to: a character pointer
 *
 * Return: none because it's void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
