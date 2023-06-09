#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the number changed
 * @index: index of the bit starting frm 0 to set to 1
 *
 * Return: 1 if worked, -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* greater than 64bit or invalid index*/
	if (index > 63)
		return (-1);/*error*/
	/* set bit at index to 1 pointed by n*/
	/*left shift 1 by index,creatn mask*/
	/*perform OR bet mask and original val *n */
	*n = (*n | (1UL << index));

	/*successful setting of the bit*/
	return (1);

}
