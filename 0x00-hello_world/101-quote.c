#include <unistd.h>
/**
 * main - Entry point
 *
 * void - Does not return a value
 *
 * Return: Return 1 indicates an error
 */
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, q, sizeof(q) - 1);
	return (1);
}
