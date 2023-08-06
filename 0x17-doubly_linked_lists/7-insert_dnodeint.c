#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the new node.
 * @n: Value of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;/*to traverse the list*/
	unsigned int i;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);/*If 0,calls add_dnodeint funct to add beginin*/
	else/*if idx != 0*/
	{
		head = *h;/*assigns the value of the head pointer to head*/
		i = 1;/*initializes counter i to 1,to start from 2nd positn in list*/

		if (head != NULL)/* Move headptr to the beginning of the list */
			while (head->prev != NULL)/*traverses to previous node until becomeNULL*/
				head = head->prev;
		while (head != NULL)/*iterates list until desired index is reached*/
		{
			if (i == idx)/*If currt positn matches desired indx*/
			{
				if (head->next == NULL)/*indicates it's at end of list*/
					new = add_dnodeint_end(h, n);/*If 0,calls add_dnodeint funct to add end*/
				else/*if not at the end of the list*/
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)/*if memory allocation is successful*/
					{
						new->n = n;/*assigns value n to new->n*/
						new->next = head->next;/*updates ptrs to insert new*/
						new->prev = head;
						head->next->prev = new;
						head->next = new;/*node correctly into the list*/
					}
				}
				break;
			}
			head = head->next;/*updates the head pointer to the next node*/
			i++;/* increments counter i to continue traversing list*/
		}
	}
	return (new);/*address of the new node (new)*/
}
