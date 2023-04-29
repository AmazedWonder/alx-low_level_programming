#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times '_' should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	/* print n underscores followed by a newline */

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
