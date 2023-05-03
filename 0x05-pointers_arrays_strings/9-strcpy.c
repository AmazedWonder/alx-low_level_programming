#include "main.h"

/**
 * *_strcpy -  that copies the string pointed to by src
 * to the buffer by dest
 * @src: copies string from src
 * @dest: pastes in dest
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	/* loop through the length of the string in src */
	do {
		l++;
	} while (*(src + l) != '\0');

	/* Copy the string from src to dest */
	do {
		dest[x] = src[x];
		x++;
	} while (x < l);

	/* Add null terminator to dest */
	dest[l] = '\0';

	return (dest);
}
