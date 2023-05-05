#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * Each letter is replaced by the letter 13 positions after it in the alphabet.
 *
 * @s: Pointer to the null-terminated string to encode.
 * Return: pointer to the encoded string, same as input string.
 */
char *rot13(char *s)
{
	char *alp = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *alp13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;
	int c;

	while (*p != '\0')
	{
		for (c = 0; alp[c] != '\0'; c++)
		{
			if (*p == alp[c])
			{
				*p = alp13[c];
				break;
			}
		}
		p++;
	}
	return (s);
}
