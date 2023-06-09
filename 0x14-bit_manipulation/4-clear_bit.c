#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit,starting from 0
 *
 * Return: 1 if it worked, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int store_bitmask;

	if (index > 63)
		return (-1);/*error*/

	/*creates a bitmask with only the bit at the index set to 1*/
	store_bitmask = 1UL << index;

	/* check if set to 1,perform bitwise &*/
	if (*n & store_bitmask)
		/*if result is not zero, bit is set to 1 so->*/
		/*use bitwise XOR to set bit to 0*/
		*n ^= store_bitmask;

	return (1);

}
