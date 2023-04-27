#include <stdio.h>

/**
 * main - Entry point
 * unsigned - Should not include a sign or negative value
 * Return: Always 0
*/
int main(void)
{
	int i = 1;
	unsigned long f1 = 1, f2 = 2, f3;

	printf("%lu", f1);
	while (i < 50)
	{
		printf(", %lu", f2);
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		i++;
	}
	printf("\n");
	return (0);
}

