#include <stdio.h>
/**
 * main - Starting point
 *
 * void - Returns nothing
 *
 * ld - Long decimal
 *
 * the \n - new line
 *
 * Return: Zero 0 always (success)
 */
int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	fprintf(stderr, "Error: Error occurred.\n");
	return (0);
}
