#include "main.h"

/**
 * print_most_numbers - functtion that prints 0 to 9
 * void - return no value
 * _putchar - prints ASCII of 0 to 9 and new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
