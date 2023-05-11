#include "main.h"
int _divisible(int num, int d);

/**
 * _divisible - Help to check if a number is divisible by another number
 * @num: The number to be divided
 * @d: The current divisor to check
 * Return: 1 if num is not divisible by any number other than itself and 1,
 * 0 if it is divisible by divisor, or the result of further recursion
 */
int _divisible(int num, int d)
{
if (num == d) /* num is only divisible by itself */
return (1);

if (num % d == 0) /* num is divisible by divisor */
return (0);

/* Check divisibility with the next divisor */
return (_divisible(num, d + 1));
}

/**
 * is_prime_number - Checks for prime number recursively
 * @n: number to be checked
 * Return: 1 if n is prime, 0 if it is not
 */
int is_prime_number(int n)
{
if (n <= 1) /* 1 and below are not prime */
return (0);

/* Check divisibility with divisors 2 to n-1 */
return (_divisible(n, 2));
}
