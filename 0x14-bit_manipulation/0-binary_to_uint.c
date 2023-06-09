#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: string containing the binary number
 * /pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,or 0 if
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int l = 0;
	unsigned int _val = 0;


	if (!b)
		return (0);

	for (; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')

			return (0);

		_val = 2 * _val + (b[l] - '0');

	}

	return (_val);
}
