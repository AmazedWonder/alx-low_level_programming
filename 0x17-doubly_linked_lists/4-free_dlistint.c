#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		/*exits without performing any further operations.*/
		return;

	/*If the head pointer is not NULL*/
	/*enters a loop that continues until the next*/
	/*pointer of the current node (head->next) becomes NULL*/	
	while (head->next)
	{
		head = head->next; /* Move head to the next node */
		free(head->prev); /* Free the previous node */
	}

	free(head); /* Free the last remaining node */
}
