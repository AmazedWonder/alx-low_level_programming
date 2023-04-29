#include "main.h"

/**
 * more_numbers - function to print more numbers 0to 14
 * void - returns no value
 * _putchar - converts int and prints number from ASCII code
 */
void more_numbers(void)

{
	int c, d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
				/*'prints 10 digits of d */
				_putchar(d / 10 + '0');
			/* prints 1 digit of d */
			_putchar (d % 10 + '0');
		}
		_putchar('\n');
	}
}
