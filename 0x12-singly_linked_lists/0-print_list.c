#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_elem = 0;

	for (; h != NULL; h = h->next)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		num_elem++;
	}
	return (num_elem);
}
