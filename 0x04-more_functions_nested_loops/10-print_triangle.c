#include "main.h"

/**
 * print_triangle - prints a triangle using charactr #,
 * followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int hash, indx;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (indx = size - hash; indx > 0; indx--)
			{
				_putchar(' ');
			}


			for (indx = 0; indx < hash; indx++)
			{
				_putchar('#');
			}
			if (size == hash)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
