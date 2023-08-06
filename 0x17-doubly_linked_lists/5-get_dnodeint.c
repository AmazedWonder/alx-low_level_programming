#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specific
 * index in a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the desired node.
 *
 * Return: Pointer to the node at the specified index,
 *	or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* variables*/
	unsigned int size;
	dlistint_t *tmp_ptr;

	/* Initialize size to 0*/
	size = 0;

	/*If head is NULL, the list is empty, so return NULL*/
	if (head == NULL)
		return (NULL);

	/* Set tmp_ptr to point to the head of the list*/
	tmp_ptr = head;

	/* traverse the list until tmp_ptr becomes NULL*/
	while (tmp_ptr)
	{
		/* if the current index matches the desired index,*/
		/*return the node*/
		if (index == size)
			return (tmp_ptr);

		/*increment the size counter*/
		size++;

		/*Move tmp_ptr to the next node*/
		tmp_ptr = tmp_ptr->next;
	}

	/*If the desired index is out of range, return NULL*/
	return (NULL);
}
