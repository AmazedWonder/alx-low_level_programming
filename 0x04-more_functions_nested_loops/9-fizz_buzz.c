#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * if else - num divisible by 3 witout remainder,numbers divisible by 5
 * _putchar - print character
 * Return: Always 0 successful
 */
int main(void)
{
	int FB_test;

	/* loop throught 1 to 100 */
	for (FB_test = 1; FB_test <= 100; FB_test++)
	{
		/* if multiples of 3 */
		if (FB_test % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		/* multiples of 5 */
		else if (FB_test % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		/* multiples of 3 and 5 */
		else if (FB_test % 3 == 0 && FB_test % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", FB_test);
		}

		if (FB_test < 100)
		{
			putchar(32);
		}
		else
			putchar('\n');
	}
	return (0);
}
