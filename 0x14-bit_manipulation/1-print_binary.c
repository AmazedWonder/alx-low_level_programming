#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int i, trak_bit = 0;
	unsigned long int current_bit;

	for (i = 63; i >= 0; i--)
	{
		current_bit = n >> i;

		if (current_bit & 1)
		{
			_putchar('1');
			trak_bit++;
		}
		else if (trak_bit)
			_putchar('0');
	}

	if (!trak_bit)
		_putchar('0');
}
