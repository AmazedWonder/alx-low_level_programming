#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number for factorial
 * Return: -1(error) or 1 and n factorial
 */
int factorial(int n)
{
if (n < 0)

return (-1);

if (n == 0)

return (1);

return (n * factorial(n - 1));
}
