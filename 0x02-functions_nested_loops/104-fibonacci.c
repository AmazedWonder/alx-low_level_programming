#include <stdio.h>

/**
 * main - Entry point
 * void - return no value
 * while - loop until 98 terms are out
 * Return: Always 0
*/
int main(void)
{
	int f1 = 1, f2 = 2, f3;
	int start = 2;

	printf("%d, %d, ", f1, f2);

	while (start < 98)
	{
		f3 = f2;
		/* calculate next term */
		f2 = f1 + f2;
		/* the next set term */
		f1 = f3;
		start++;
		printf("%d", f2);

		/* before last term */
		if (start < 98)
		{
			/* comma and space */
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
