#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	int f, s, t;

	for (f = 0; f < 8; f++)
	{
		for (s = f + 1; s < 9; s++)
		{
			for (t = s + 1; t < 10; t++)
			{
				putchar(f + '0');
				putchar(s + '0');
				putchar(t + '0');
				if (f < 7 || s < 8 || t < 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
