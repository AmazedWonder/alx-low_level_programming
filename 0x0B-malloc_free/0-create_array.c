#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: assigned character
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int index;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		str[index] = c;

	return (str);
}
