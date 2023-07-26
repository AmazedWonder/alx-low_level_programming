#include "main.h"

/**
 * _strspn - Entry point
 * @s: strings of character
 * @accept: accepted input
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *p;

	while (*s)
	{
	for (p = accept; *p; p++)
	{
	if (*s == *p)
	{
	n++;
	break;
	}
	}
	/* *p is equal to null char */
	if (*p == '\0')
	{
	return (n);
	}
	s++;
	}
	return (n);
}
