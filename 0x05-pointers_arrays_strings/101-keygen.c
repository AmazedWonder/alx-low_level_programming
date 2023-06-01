#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* https://github.com/holbertonschool/0x04.c/
raw/master/101-crackme */
/**
 * main - generates keygen.
 * while - loop through num
 * and generates series of random numbers between 0 and 127
 * printing the difference between the sum and 2772 as the last character
 * Return: 0 Always.
 */
int main(void)
{
	int r = 0, s = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (s < 2772)
	{
		r = rand() % 128;
		if ((s + r) > 2772)
			break;
		s = s + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - s));
	return (0);
}
