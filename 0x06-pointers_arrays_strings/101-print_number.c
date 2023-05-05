#include "main.h"

/**
 * print_number - prints an integer to the stdout
 * store - Enough space to store the largest 32-bit integer in decimal
 * including sign and null terminator
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int num = n;
	int digit, i, j;
	char store[12];

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	/* Gets digits from the integer and store them in the store in reverse */
	for (i = 0; num > 0; i++)
	{
		digit = num % 10;
		store[i] = digit + '0';
		num /= 10;
	}

	/* Print the digits in reverse order */
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(store[j]);
	}
}
