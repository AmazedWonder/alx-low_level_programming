#include "main.h"

void rev_string(char *s);
/**
 * rev_string - reverse array
 * @s: integer parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;


	for (j = 0; j < i; j++, i--)
	{
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: numbers
 * @n2: numbers
 * @r: buffer will b use to store the result
 * @size_r: size of the buffer
 * over - keeps track of any overflow
 * int_val: stores the int value of char
 * digits - keeps track of number of digits
 * temp - store the temporary sum
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, i = 0, j = 0, digits = 0;
	int int_val1 = 0, int_val2 = 0, temp = 0;

	while (n1[i] != '\0')
		i++;

	while (n2[j] != '\0')
		j++;

	i--;
	j--;

	if (j >= size_r || i >= size_r)
	{
		return (0);
	}

	while (i >= 0 || j >= 0 || over)
	{
		int_val1 = (i >= 0) ? (n1[i] - '0') : 0;
		int_val2 = (j >= 0) ? (n2[j] - '0') : 0;
		temp = int_val1 + int_val2 + over;

		if (temp >= 10)
			over = 1;
		else
			over = 0;

		if (digits >= (size_r - 1))
			return (0);

		r[digits++] = (temp % 10) + '0';
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	r[digits] = '\0';
	rev_string(r);
	return (r);
}
