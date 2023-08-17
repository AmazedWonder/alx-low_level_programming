#include "hash_tables.h"

/**
 * hash_table_delete - function is used to free the
 * hash table and all its nodes
 * @ht: Pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur_node, *next_node;
	unsigned long int index = 0;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		cur_node = ht->array[index];
		while (cur_node)
		{
			next_node = cur_node->next;

			/* Free the key, value, and the current node */
			if (cur_node->key)
				free(cur_node->key);
			if (cur_node->value)
				free(cur_node->value);
			free(cur_node);

			cur_node = next_node;
		}
	}

	/* Free the array and the hash table itself */
	free(ht->array);
	free(ht);
}
