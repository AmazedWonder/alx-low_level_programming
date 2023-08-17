#include "hash_tables.h"

/**
 * hash_table_get - function retrieves the value
 * associated with a key in the hash table
 * @ht: Pointer to hash table
 * @key: Key to retrieve the value
 *
 * Return: The value associated with the key, or
 *	NULL if the key does not exist.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *curr_node;

	if (!ht || !key || !*key)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size); /* Get index for key */
	curr_node = ht->array[i];

	while (curr_node)
	{
		if (!strcmp(key, curr_node->key)) /* If key found,return its asstd value */
			return (curr_node->value);
		curr_node = curr_node->next;
	}

	return (NULL); /* Key not found, return NULL */
}
