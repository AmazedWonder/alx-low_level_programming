#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * void - Return no value
 * Return: Always 0 (success)
*/
int main(void)
{
	int num;

	/* loop through to print single number 0 to 9 */
	for (num = 0; num < 10; num++)
		/* prints last digit of num being divided by 10 as character */
		/* adds last digit to ASCII code character 0 */
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
