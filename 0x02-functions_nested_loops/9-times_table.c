#include "main.h"
/**
 * times_table - Prints 9 timestable
 * for loop loops through num
 * if else condition
 * Return: Always 0
*/
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if ((c / 10) == 0)
			{
				if (b != 0)
					_putchar(32);
				_putchar(c + '0');
					if (b == 9)
						continue;
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (b == 9)
					continue;
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}

