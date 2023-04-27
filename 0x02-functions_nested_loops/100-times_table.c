#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function print
 * main - Entry point
 * @n: unknown number
 * if - condition to return no figure
 * for - loops through the numbers for wanted results
 * Return: Always 0
*/
void print_times_table(int n)
{
	int a, b;

	if (n < 0 || n > 15)
	{
		/* do not print anything */
		return;
	}

	for (a = 1; a <= n; ++a)
	{
		for (b = 1; b <= n; ++b)
		{
			int product = a * b;
			int digit = product / 100;

			if (digit > 0)
			{
				_putchar(digit + '0');
			}
			else
			{
				_putchar(32);
			}
			digit = (product / 10) % 10;
			if (digit > 0 || a == 1)
			{
				_putchar(digit + '0');
			}
			else
			{
				_putchar(32);
			}
			_putchar((product % 10) + '0');
			_putchar(32);
		}
		_putchar('\n');
	}
}

