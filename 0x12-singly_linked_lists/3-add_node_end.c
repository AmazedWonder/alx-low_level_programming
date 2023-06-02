#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t linked list
 * @head: double pointer to the list_t list
 * @str: string to add to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptrNew;
	list_t *temp = *head;
	unsigned int len = 0;

	for (; str[len]; len++)
		;


	ptrNew = malloc(sizeof(list_t));

	if (!ptrNew)/* empty string*/
		return (NULL);

	ptrNew->str = strdup(str);/*duplicate string*/

	ptrNew->len = len;/*point to new leñght and update*/

	ptrNew->next = NULL;/*ptr of new node is null*/


	if (*head == NULL)
	{
		*head = ptrNew;/*point to new node*/
		return (ptrNew);/*ret address of new node*/
	}
	/*if list not empty loop till last node*/
	while (temp->next)
		temp = temp->next;/* updt temp to point to next mode*/

	/* point to and add new node to end of list*/
	temp->next = ptrNew;
	return (ptrNew);/*ret addres to new node*/
}
