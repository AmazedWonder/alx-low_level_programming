#include <stdio.h>
/**
 * main - Entry point
 * void - Returns no value
 * Return: Always 0 (success)
*/
int main(void)
{
	int lc;

	/* for loop through */
	for (lc = 'a'; lc <= 'z'; lc++)
		/* print all lowercase alphabets except q and e */
	{
		if (lc != 'q' && lc != 'e')
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
