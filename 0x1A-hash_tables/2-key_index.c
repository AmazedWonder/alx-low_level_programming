#include "hash_tables.h"

/**
 * key_index - calculates the index in a hash table for
 * a given key using the hash_djb2 function
 * @key: key (string) to hash
 * @size: size of hash table
 *
 * Return: index of the key using the djb2 hash algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Calculate the index using the djb2 hash algorithm */
	return (hash_djb2(key) % size);
}
