#include <stdio.h>
/**
 * main - Entry point
 * void - Return no value
 * Return: Always 0 (success)
*/
int main(void)
{
	int digit;
	/* number to print from */
	digit = 0;

	/* while loop to get and print digits */
	while (digit <= 9)
	{
		printf("%d", digit);
		/* increase loop by 1 */
		digit++;
	}
	printf("\n");
	return (0);
}

