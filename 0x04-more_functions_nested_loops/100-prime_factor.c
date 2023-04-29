#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * n - the prime factor to be gotten
 * max - the current maximum prime factor (initialized to -1)
 * i - is counter
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143, max = -1, i;
	/* values of i from 2 to the square root of n */
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		/* if i is a factor of n */
		while (n % i == 0)
		{
			if (i > max)
				max = i;
			n = n / i;
		}
	}

	if (n > 2 && n > max)
		max = n;

	printf("%ld\n", max);

	return (0);
}
