#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string of characters
 * while - iterates through characters until '\0'
 * if - checks for char 'a' to 'z' in ASCII
 * if lowercase subtract 32 fro ASCII(to convert to uppercase)
 * Return: string
 */
char *string_toupper(char *str)

{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
