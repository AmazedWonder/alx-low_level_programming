#include "main.h"

/**
 * _strcpy -  that copies the string pointed to by src
 * to the buffer by dest
 * @src: copies string from src
 * @dest: copies to buffer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	/* Loop through the string in src to find its length */
	while (src[l] != '\0')
	{
		l++;
	}

	/* Copy the string from src to dest */
	while (x < l)
	{
		dest[x] = src[x];
		x++;
	}

	/* Add null terminator to dest */
	dest[l] = '\0';

	return (dest);
}
