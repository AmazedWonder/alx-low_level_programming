#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at
 * end of a doubly linked list(dlistint_t)
 *
 * @head: A pointer to a pointer to the head
 * of list(dlistint_t)
 * @n: The integer value to be stored in the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node = *head;
	/* Declare and allocate memory for a new node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		/* Fail to allocate memory for new node */
		return (NULL);
	}

	/* Initialize the new node */
	new_node->n = n;/*set val of new to integer*/
	new_node->next = NULL;/*set next pointer of new to NULL*/

	/* Find the last node in the list */
	/*dlistint_t *last_node = *head;*/

	if (last_node != NULL)
		while (last_node->next != NULL)
			last_node = last_node->next;

	/* Update the last node and the head of the list */
	if (last_node != NULL)
	{
		/*updates its next pointer to point to the new node*/
		last_node->next = new_node;
		/*set prev pointer of new node to point to last node*/
		new_node->prev = last_node;
	}
	else
	{
		/*set the head of the list to point to the new node*/
		*head = new_node;
		/*sets the prev pointer of the new node to NULL*/
		new_node->prev = NULL;
	}

	/* Return the address of the new node */
	return (new_node);
}
