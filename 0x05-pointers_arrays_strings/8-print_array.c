#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array pointer variable
 * @n: is the number of elements array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	/* loop through array and print the elements */
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}

	/* loop stopped before last element,print last element */
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

