#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints file name
 * macro FILE expands to the name of the current input file,
 * in the form of a C string constant
 * Return: Always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
