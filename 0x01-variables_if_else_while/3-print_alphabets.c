#include <stdio.h>
/**
 * main - Start point
 * void - Return no value
 * Return: Always 0 (success)
*/
int main(void)
{
	int alphabet;

	/* print lowercase alphabets from ASCII */
	for (alphabet = 90; alphabet <= 122; alphabet++)
	{
		putchar(alphabet);
	}
	/* print uppercase alphabets from ASCII */
	for (alphabet = 65; alphabet <= 97; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
