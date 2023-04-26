#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int _lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* this code is to get lastdigit of n */
	_lastDigit = n % 10;

	printf("Last digit of %d is ", n);
	if (_lastDigit > 5)
	{
		printf("%d and is greater than 5\n", _lastDigit);
	}
	else if (_lastDigit == 0)
	{
		printf("%d and is 0\n", _lastDigit);
	}
	else
		printf("%d and is less than 6 and not 0\n", _lastDigit);
	return (0);
}
