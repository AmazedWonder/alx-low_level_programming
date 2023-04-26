#include <stdio.h>
/**
 * main - Entry point
 * void - Returns no value
 * Return: Always 0 (success)
*/
int main(void)
{
	int dg;

	for (dg = 0; dg < 10; dg++)
	{
		/* print digit */
		putchar(dg + '0');
		if (dg != 9)
		{
			/* print comma */
			putchar(44);
			/* print space */
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}

