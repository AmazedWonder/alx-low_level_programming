#include "main.h"

/**
 * _strncpy - function that copies a string exactly like strncpy
 * @dest: string destination
 * @src: string source
 * @n: n bytes from string source
 * while - loop copies characters from src to dest
 * iterates until copies n characters or reaches the end of src
 * sec loop fills the remaining characters in dest with null terminators
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_begin = dest;

	while (n > 0 && (*dest++ = *src++))
		n--;

	while (n-- > 0)
		*dest++ = '\0';

	return (dest_begin);
}
