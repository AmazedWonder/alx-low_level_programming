#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: char to be checked
 * while loop iterates string length
 * for loop through string starting at n
 * Return: half character
 */
void puts_half(char *str)
{
	int length = 0;
	int n, i;

	while (str[length] != '\0')
	{
		length++;
	}

	/* adjust binary rep to the right */
	n = (length >> 1) + (length & 1);

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
