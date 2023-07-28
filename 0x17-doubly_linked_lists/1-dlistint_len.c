#include "lists.h"

/**
 * dlistint_len - function counts the numb of elements
 * in a linked list(dlistint_t)
 * @h: head of linked list(dlistint_t)
 *
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*var to store number of elements in linkd list*/
	size_t nodes_num = 0;

	while (h)
	{
		/*increment element count*/
		nodes_num++;
		/*go to next element*/
		h = h->next;
	}
	/*return total numb of element in list*/
	return (nodes_num);
}
