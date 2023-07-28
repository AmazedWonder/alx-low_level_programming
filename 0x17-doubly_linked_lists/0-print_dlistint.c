#include "lists.h"

/**
 * print_dlistint - function prints all elements of a list distinct_t
 * @h: distinct_t list head
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_num = 0; /* to store num of nodes in list*/

	while (h)
	{
		/*increment node count*/
		nodes_num++;
		/*print current node value*/
		printf("%d\n", h->n);
		/*go to the next node*/
		h = h->next;
	}
	/*Return total num of nodes in the list*/
	return (nodes_num);
}
