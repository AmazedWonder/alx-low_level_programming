#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the
 * data (n) of a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		/* Move to the beginning of the list */
		while (head->prev != NULL)
			head = head->prev;

		/* Traverse the list and accumulate the sum */
		while (head != NULL)
		{
			sum += head->n;/*adds currntnode data to sum*/
			head = head->next;
		}
	}

	return (sum);
}
