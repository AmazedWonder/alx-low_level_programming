#include <stdio.h>
/**
 * main - Start point
 * Return: Always 0 (success)
*/
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 100; n1++)
	{
		for (n2 = n1 + 1; n2 < 100; n2++)
		{
			int g1 = n1 / 10, g2 = n1 % 10;
			int g3 = n2 / 10, g4 = n2 % 10;

			putchar('0' + g1);
			putchar('0' + g2);
			putchar(32);
			putchar('0' + g3);
			putchar('0' + g4);
			if (n1 != 98 || n2 != 99)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

