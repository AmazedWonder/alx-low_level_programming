#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function print
 * main - Entry point
 * @n: number
 * Return: Always 0
*/
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		/* do not print anything */
		return;
	}

	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			printf("%4d,", i * j);
		}
		printf("\n");
	}
}

