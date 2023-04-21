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
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
