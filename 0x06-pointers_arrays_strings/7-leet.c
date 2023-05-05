#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: string of ASCII code
 * Return: ASCII string
 */
char *leet(char *str)
{
	int c1 = 0, c2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[c1])
	{
		for (c2 = 0; c2 <= 7; c2++)
		{
			if (str[c1] == leet[c2] ||
			str[c1] - 32 == leet[c2])
				str[c1] = c2 + 48;
		}
		c1++;
	}
	return (str);
}
