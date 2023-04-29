
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int tr, tc;


		for (tr = 1; tr <= size; tr++)
		{
			for (tc = tr; tc < size; tc++)
			{
				_putchar(' ');
			}


			for (tc = 1; tc <= tr; tc++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
