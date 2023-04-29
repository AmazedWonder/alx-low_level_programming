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
	int fb;

	for (fb = 1; fb <= 100; fb++)
	{
		if (fb % 3 == 0 && fb % 5 != 0)
		{
			printf(" Fizz");
		} else if (fb % 5 == 0 && fb % 3 != 0)
		{
			printf(" Buzz");
		} else if (fb % 3 == 0 && fb % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (fb == 1)
		{
			printf("%d", fb);
		} else
		{
			printf(" %d", fb);
		}
	}
	printf("\n");
	return (0);
}
