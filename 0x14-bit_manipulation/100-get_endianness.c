#include "main.h"

/**
 * get_endianness - function determines whether the
 * system is big endian or little endian
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *ptr;

	/*casts the address of value to a character pointer ptr */
	ptr = (char *) &value;

	/* returns the integer value of the first byte of value */
	/* by dereferencing the character pointer ptr*/
	return ((int)*ptr);

}
