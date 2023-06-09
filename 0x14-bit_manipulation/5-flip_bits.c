#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another/counts the number of bits to change
 * @n: ul integer
 * @m: ul integer
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, track_flip = 0;
	unsigned long int specific_bit;
	unsigned long int result = n ^ m;

	/* start from bit63 down to bit0 */
	for (i = 63; i >= 0; i--)
	{
		/* shift val to right using i then store in specifi_bit*/
		specific_bit = result >> i;
		/* check if specific bit is 1, if so, flip*/
		if (specific_bit & 1)

			track_flip++;
	}

	return (track_flip);/* return value */
}
