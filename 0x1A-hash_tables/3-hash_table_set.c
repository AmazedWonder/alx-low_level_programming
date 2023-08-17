#include "hash_tables.h"

/**
 * hash_table_set - function adds an element to the hash table
 * @ht: Pointer to the hash table
 * @key: Key to add the element
 * @value: Value to add the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *value_copy, *key_copy;
	hash_node_t *curr_node, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	value_copy = strdup(value); /* Create a copy of the value */
	if (!value_copy)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);/*Get index for key*/
	curr_node = ht->array[i];

	while (curr_node)
	{
		if (!strcmp(key, curr_node->key)) /* If key exists, update its val*/
		{
			free(curr_node->value);
			curr_node->value = value_copy;
			return (1);
		}
		curr_node = curr_node->next;
	}

	new_node = calloc(1, sizeof(hash_node_t)); /* Create a new node */
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	key_copy = strdup(key); /* Create a copy of the key */
	if (!key_copy)
		return (0);

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[i];
	ht->array[i] = new_node; /* Add the new node to the hash table */
	return (1);
}
