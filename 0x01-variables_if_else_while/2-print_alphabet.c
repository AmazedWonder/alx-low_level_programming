#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	int lc;

	/* print lowercase letters */
	/* loop through */
	for (lc = 'a'; lc <= 'z'; lc++)
		/* print current letter */
	{
		putchar(lc);
	}
	/* print new line */
	putchar('\n');
	return (0);
}
