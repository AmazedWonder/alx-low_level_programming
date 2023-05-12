#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: the integer value of the string, or 0 if no valid integer found
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < len && f == 0; i++)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
	}

	if (f == 0)
		return (0);
	return (n);
}

