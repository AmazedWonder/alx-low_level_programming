#include <stdlib.h>
#include "lists.h"


/**
 * free_list - frees a list_t linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)/* head != NULL */
	{
		/* store ptr to next elem of list in temp var*/
		/* to ensure ptr to nxt elem is not lost when curr ele is freed*/
		temp = head->next;
		/* free mem for cur elem(head->str)*/
		free(head->str);
		/* free curr elem*/
		free(head);
		/* upt curr ele to be next ele in list*/
		head = temp;
	}
}
