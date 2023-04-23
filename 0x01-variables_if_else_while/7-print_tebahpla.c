#include <stdio.h>
/**
 * main - Entry point
 * void - Return no value
 * Return: Always 0 (success)
*/
int main(void)
{
	int rev;
	
	/* print the lowercase alphabet in reverse */
	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	/* print newline */
	putchar('\n');
	return 0;
}

