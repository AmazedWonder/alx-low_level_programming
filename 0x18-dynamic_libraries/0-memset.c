#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to memory
 * @n: n bytes of the memory area, value to be set
 * @b: constant byte to be set
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	*(s + c) = b;
		return (s);
}
