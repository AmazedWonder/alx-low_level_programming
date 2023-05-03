#include "main.h"
/**
 * puts2 - function to print char after 1
 * skipping a number each
 * for - 1st, loop to calculate the string length
 * for loop 2nd, increment by 2 to skip odd characters
 * @str: input
 */
void puts2(char *str)
{
	int count = 0;
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		count++;
	}

	for (n = 0; n < count; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
