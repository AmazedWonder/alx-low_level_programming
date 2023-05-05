#include "main.h"

/**
 * _strncpy - function that copies a string exactly like strncpy
 * @dest: string destination
 * @src: string source
 * @n: n bytes from string source
 * for - loop copies characters from src to dest
 * reaches the end of src
 * if - checks if current character in src is the null terminator
 * If it is, the loop terminates
 * the remaining characters in dest are filled with null terminators
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (src[c] != '\0')
			dest[c] = src[c];
		else
			dest[c] = '\0';
	}

	return (dest);
}
