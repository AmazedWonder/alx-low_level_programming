#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning
 * of a doubly linked list(dlistint_t)
 * @head: A pointer to a pointer to the
 * head of the list(dlistint_t)
 * @n: The integer value to be stored in the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Declare ptr and allocate memory for a new node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		/* Fail to allocate memory for new node */
		return (NULL);
	}

	/* Initialize the new node */
	new_node->n = n;/*set val of new to integer*/
	new_node->prev = NULL;/*set prev ptr of new to NULL*/
	new_node->next = *head;/*set next ptr of new to curr head*/

	/* Update the head of the list */
	if (*head != NULL)/*if not empty*/
	{
		(*head)->prev = new_node;
	}
	/*update ptr head to point to new node*/
	*head = new_node;

	/* Return the address of the new node */
	return (new_node);
}
