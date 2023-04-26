#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	int d, n;

	for (d = 0; d < 9; d++)
	{
		for (n = d + 1; n < 10; n++)
		{
			/* print the first digit */
			putchar(d + '0');
			/* print the second digit */
			putchar(n + '0');
			if (d != 8 || n != 9)
			{
				/* print comma */
				putchar(44);
				/* space */
				putchar(32);
			}
		}
	}
	/* new line */
	putchar('\n');
	return (0);
}

