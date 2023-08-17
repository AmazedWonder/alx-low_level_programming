#include "hash_tables.h"

/**
 * hash_djb2 - function computes hash value of string
 * using djb2 algorithm
 * @str: string to hash
 *
 * Return: computed hash value as a 64-bit unsigned int
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_val;/* Updated variable name */
	int c;

	hash_val = 5381; /* Initializes the hash value */
	while ((c = *str++))
	{
		/* hash_value * 33 + c */
		hash_val = ((hash_val << 5) + hash_val) + c;
	}
	return (hash_val);
}
