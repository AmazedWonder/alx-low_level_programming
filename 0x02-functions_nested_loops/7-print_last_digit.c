#include "main.h"

/**
 * print_last_digit - prints last digit of num
 * @n: number
 * digit - absolute value
 * Return: Always 0 (success)
*/
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
		digit = -1 * (n % 10);
	}
	else
	{
		digit = (n % 10);
	}
	/* adds digit to ASCII value of 0 */
	_putchar('0' + digit);
	return (digit);
}
