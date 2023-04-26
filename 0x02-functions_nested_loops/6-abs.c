#include "main.h"

/**
 * _abs - To get absolute value
 * if - if n negative multiply by -1 to be positive
 * @n: number
 * Return: abs num
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
