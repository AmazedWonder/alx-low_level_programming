#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int adda, addb, c;

	adda = 0;
	addb = 0;

	for (c = 0; c < size; c++)
	{
	adda = adda + a[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
	addb += a[c * size + (size - c - 1)];
	}

	printf("%d, %d\n", adda, addb);
}
