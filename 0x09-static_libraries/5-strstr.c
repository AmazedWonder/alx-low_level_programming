#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: first occurrence of the substring
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *h = haystack;
	char *ne = needle;

	while (*h == *ne && *ne != '\0')

	{

	h++;
	ne++;

	}

	if (*ne == '\0')
	{
	return (haystack);
	}
	haystack++;
	}
	return (0);
}
