#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Function to count 24 hrs and min
 * int - hour and minutes
 * Return: Always 0
*/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(58);
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
