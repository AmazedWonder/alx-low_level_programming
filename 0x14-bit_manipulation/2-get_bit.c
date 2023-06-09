#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * in a decimal number
 * @n: number
 * @index: index of the bit
 *
 * Return: value of the bit index
 *	index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)/*more than 64bits*/
		return (-1);/*indicate error*/
/* shift right,bitwise & to isolate least significant bit*/
	bit_value = (n >> index) & 1;

	return (bit_value);
}
