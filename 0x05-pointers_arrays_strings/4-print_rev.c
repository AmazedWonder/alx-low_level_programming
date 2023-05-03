#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int str = 0, rev;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	s--;
	for (rev = str; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
