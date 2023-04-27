#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)

{
	int sum = 0, i;
	/* buffer str with enough space */
	/* 10 is space to hold formated sum */
	char str[10];

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	/* sprintf to format the sum as a string */
	sprintf(str, "%d\n", sum);
	/* fputs to write the string to the standard output */
	fputs(str, stdout);
	return (0);
}
