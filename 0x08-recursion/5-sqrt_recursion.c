#include "main.h"
int _sqrt(int n, int g);

/**
 * _sqrt - function to calculate the square root recursively
 * @n: The number for which the square root is to be calculated
 * @g: The current guess for the square root
 * Return: The square root of n if found, -1 if not found
 */
int _sqrt(int n, int g)
{
if (g * g == n)
return (g);
else if (g * g > n)
return (-1);
else
return (_sqrt(n, g + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of n
 * @n: number to calculate square root
 * Return: if the square root of is found or -1 if not found
 */
int _sqrt_recursion(int n)
{
if (n < 0) /* not valid */
return (-1);
return (_sqrt(n, 1));
}
