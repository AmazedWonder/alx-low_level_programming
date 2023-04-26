#include <stdio.h>
/**
 * main - Entry point
 * void - Return no value
 * Return: Always 0 (success)
*/
int main(void)
{
	int Hex;
	/* the numbers 0 to 9 - base 16 */
	for (Hex = 0; Hex < 10; Hex++)
	{
		putchar(Hex + '0');
	}
	/* letters a to f - base 16 */
	for (Hex = 0; Hex < 6; Hex++)
	{
		putchar(Hex + 'a');
	}
	putchar('\n');
	return (0);
}

