#include "main.h"
int s_palindrome(char *s, int b, int e);

/**
 * _strlen_recursion - returns the length of a string
 * @s: string length to be calculated
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * s_palindrome - search if a string is a palindrome recursively
 * @s: the string we need to check
 * @b: begin index
 * @e: end index
 * Return: 1 if palindrome, 0 if not
 */
int s_palindrome(char *s, int b, int e)
{
if (b >= e)
return (1);

if (s[b] == s[e])
return (s_palindrome(s, b + 1, e - 1));

return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 if it's not
 */
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);

if (length == 0 || length == 1)
return (1);

return (s_palindrome(s, 0, length - 1));
}
