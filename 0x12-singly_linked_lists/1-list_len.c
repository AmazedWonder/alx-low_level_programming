#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * and checks its length
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num_elem = 0;

	while (h)/* not empty or '\0' */
	{
		num_elem++;
		h = h->next;
	}

	return (num_elem);
}
