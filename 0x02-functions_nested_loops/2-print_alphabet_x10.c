#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: void
*/
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
