#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s++;)
		length++;
	{
		return (length);
	}
}
