#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeds, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1; /* Pointer to current node */
	dlistint_t *h2; /* Pointer to previous node */
	unsigned int i;

	h1 = *head;/*assigns the value of head pointer to h1*/
	/* If the list is not empty, move to the beginning */
	if (h1 != NULL)
		while (h1->prev != NULL)/*using the prev pointers*/
			h1 = h1->prev;/*until reaching the first node*/

	i = 0;
	/* Traverse the list to find the node at the given index */
	while (h1 != NULL)
	{
		if (i == index)/*if current node (h1) has same index as input index (i)*/
		{
			if (i == 0)/* If the node is the first node */
			{
				*head = h1->next;/*updates the head pointer to the next node*/
				if (*head != NULL)
					(*head)->prev = NULL;/*adjusts prev pointer of new head node*/
			}
			else/*If the node is not the first node*/
			{
				h2->next = h1->next;/*updates next ptrs h2/h1 to bypass currntnode(h1)*/

				if (h1->next != NULL)
					h1->next->prev = h2;/*adjusts prev pointer of next node*/
			}

			free(h1);
			return (1);/*indicates success*/
		}

		h2 = h1;
		h1 = h1->next;
		i++;
	}

	return (-1);/*without finding node at given index,indicate failure*/
}
