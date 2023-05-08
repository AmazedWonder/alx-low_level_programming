#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to a pointer char
 * @to: pointer to a char
 * Return: void
 */
void set_string(char **s, char *to)
{
	/* dereference s pointer,set value to the value to *to */
	*s = to;
	/* *s set to point to the same memory location as *to */
}
