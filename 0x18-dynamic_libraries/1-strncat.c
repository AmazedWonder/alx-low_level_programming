#include "main.h"

/**
 * _strncat - concatenates two strings,use at most n bytes from src
 * @dest: string
 * @src: string
 * @*p_end: finding the end of the destination string
 * @n: character
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p_end = dest;
	int i;

	while (*p_end != '\0')
		p_end++;

	/* loop through src string */
	for (i = 0; i < n && *(src + i) != '\0'; i++)
		/* src string is then copied to the end of the dest string */
		*(p_end + i) = *(src + i);

	*(p_end + n) = '\0';

	return (dest);
}
