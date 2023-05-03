#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * count - counts length of string
 * j - track position of first character in string
 * k - track position last character in string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int count = 0, j, k;
	/* temporal var for char being swapped */
	char rev;

	/* while loop(*s) till it gets to the end of string */
	while (s[count] != '\0')
	{
		count++;
	}
	/* point to last char of string */
	k = count - 1;
	/* loop through all char in str */
	for (j = 0; j < k; j++, k--)
	{
		rev = s[j];
		s[j] = s[k];
		s[k] = rev;
	}
}
