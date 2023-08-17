#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of specified size
 * initializes its members,and returns a ptr to creatd hash table.
 * @size: size of the hash table
 *
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	/*Check if size is 0, and return NULL if it is*/
	if (size == 0)
		return (NULL);

	/*Allocate memory for hash table structure*/
	ptr = calloc(1, sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);

	/*Set hash table size*/
	ptr->size = size;
	/*Allocate memory for array of hash node pointers*/
	ptr->array = calloc(size, sizeof(hash_node_t *));
	if (ptr->array == NULL)
	{
		/*If memory allocation fails, free the previously allocated*/
		/*memory for the hash table and return NULL*/
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
