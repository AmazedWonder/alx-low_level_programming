#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for 0 to 9
 * @c: character
 * Return: 1 if digit, 0 if not a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
