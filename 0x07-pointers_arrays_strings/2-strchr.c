#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: string of character
 * @c: character
 * Return: Null
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
	if (*s == c)
	return (s);
	}
	return (NULL);
}
