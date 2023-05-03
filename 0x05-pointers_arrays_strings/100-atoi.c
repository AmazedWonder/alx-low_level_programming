#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: the integer value of the string, or 0 if no valid integer found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	while (s[i] != '\0')
	{
	if (s[i] == '-')
		sign = -sign;
	else if (s[i] == '+')
		sign = 1;
	else if (s[i] >= '0' && s[i] <= '9')
		num = num * 10 + (s[i] - '0');
	else if (num > 0)
		break;
	i++;
	}
	return (num * sign);
}
