#include "main.h"
#include <stddef.h>

/**
 * wildcmp - compares two strings with wildcards
 * @s1: 1st string
 * @s2: 2nd string with wildcards (*)
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
/* parameter validation */
if (s1 == NULL || s2 == NULL)
return (0);

/* end of s1 string */
if (*s1 == '\0')
{
/* end of s2 string */
if (*s2 == '\0')
return (1);
/* if next character is a wildcard, skip it and try again */
else if (*s2 == '*')
return (wildcmp(s1, s2 + 1));
/* non identical */
else
return (0);
}

/* character in s2 is a wildcard */
if (*s2 == '*')
/* trial to match s1 with s2 with the wildcard matching s1 char */
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
/* characters in s1 and s2 identical */
else if (*s1 == *s2)
/* continue matching */
return (wildcmp(s1 + 1, s2 + 1));
/* not identical */
else
return (0);
}
