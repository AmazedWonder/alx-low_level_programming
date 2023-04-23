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
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	/* print uppercase alphabets from ASCII */
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
