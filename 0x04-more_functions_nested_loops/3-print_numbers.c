#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints num 0 to 9
 * int - function type
 * Void - returns no value
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		/* Convert integer to ASCII character */
		_putchar(c + '0');
	}
	_putchar('\n');
}

