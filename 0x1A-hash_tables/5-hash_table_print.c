#include "hash_tables.h"

/**
 * hash_table_print - function used to print the key-value
 * from hash table
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *curr_node;
	int notFirst = 0;

	if (!ht)
		return;

	printf("{");/* Opening brace for the hash table */
	for (i = 0; i < ht->size; i++)
	{
		curr_node = ht->array[i];/* Get the current node at the index */
		while (curr_node)
		{
			if (notFirst)
				/* Add comma and space if it's not the first key-value pair */
				printf(", ");
			/* Print the key-value pair */
			printf("'%s': '%s'", curr_node->key, curr_node->value);
			notFirst = 1;
			curr_node = curr_node->next;/* Move to the next node in the linked list */
		}
	}
	printf("}\n");/* Closing brace for the hash table */
}
