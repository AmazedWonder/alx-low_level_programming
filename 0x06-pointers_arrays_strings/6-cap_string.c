#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string of character(letters)
 * while - loops through ASCII code
 * Return: result string
 */
char *cap_string(char *str)

{
	int c = 0;

	while (str[c])
	{

		while (!(str[c] >= 97 && str[c] <= 122))
			c++;

		if (str[c - 1] == ' ' ||
				str[c - 1] == '\t' ||
				str[c - 1] == '\n' ||
				str[c - 1] == ',' ||
				str[c - 1] == ';' ||
				str[c - 1] == '.' ||
				str[c - 1] == '!' ||
				str[c - 1] == '?' ||
				str[c - 1] == '"' ||
				str[c - 1] == '(' ||
				str[c - 1] == ')' ||
				str[c - 1] == '{' ||
				str[c - 1] == '}' ||
				c == 0)
			str[c] -= 32;
		c++;
	}
	return (str);
}
