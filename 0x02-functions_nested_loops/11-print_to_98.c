#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - function name to print
 * if else - condition
 * for - to loop through num till executed
 * @n: numbers
 * Return: Zero always (successful)
*/
void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d, ", a);
		}
	}
	else
	{
		for (a = n; a > 98; a--)
		{
			printf("%d, ", a);
		}
	}
	printf("98\n");
}
