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
	while (*s != '\0' && *s != c)
	{
	s++;
	}
	if (*s == c)
	{
	return (s);
	}
	return (NULL);
}
