#include "main.h"

/**
 * print_number - prints an integer to the stdout
 * store - Enough space to store the largest 32-bit integer in decimal
 * including sign and null terminator
 * @n: integer to be printed
 */
void print_number(int n)
{
	char store[12];
	int i = 0;
	int neg = 0;

	if (n < 0)
	{
		neg = 1;
		n = -n;
	}

	do {
		store[i++] = '0' + (n % 10);
		n /= 10;
	} while (n > 0);

	if (neg)
	{
		store[i++] = '-';
	}
	while (--i >= 0)
	{
		_putchar(store[i]);
	}
}
