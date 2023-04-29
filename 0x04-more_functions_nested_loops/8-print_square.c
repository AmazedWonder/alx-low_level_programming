#include "main.h"


/**
 * print_square - prints a square using character '#', followed by a new line;
 * @size: square size
 * _putchar - prints new line and '#' character
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		/* loop through horizontally */
		for (i = 0; i < size; i++)
		{
			/* loops through vertically */
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
