#include "main.h"

/**
 * _strcat - Concatenates two strings
 * do - start of a loop that will execute at least once
 * checks if dest(index) is not the null terminator ('\0')
 * if it is not, dest_len is incremented by 1
 * If it is, then dest_len is not incremented
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	do {
		dest_len += (dest[index] != '\0');
	} while (dest[index++]);
	index--;
	while (src[index - dest_len])
	{
		dest[index] = src[index - dest_len];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

