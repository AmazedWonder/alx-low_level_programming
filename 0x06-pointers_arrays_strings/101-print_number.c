#include "main.h"

/**
 * print_number - prints an integer to the stdout
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int m, d1, d2;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d1 = m;
	d2 = 1;

	while (d1 > 9)
	{
		d1 /= 10;
		d2 *= 10;
	}

	for (; d2 >= 1; d2 /= 10)
	{
		_putchar(((m / d2) % 10) + 48);
	}
}
