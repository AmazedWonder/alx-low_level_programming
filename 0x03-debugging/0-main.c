#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - prints if integer is positive or negative
 * @n: the integer to be checked
 *
 * Return: void
 */
void positive_or_negative(int n)
{
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n", n);
}

