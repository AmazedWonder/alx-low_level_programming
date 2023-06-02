#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptrNew;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptrNew = malloc(sizeof(list_t));

	if (!ptrNew)/* empty or null*/
	/*	free(ptrNew);*/
	return (NULL);

	ptrNew->str = strdup(str);/* duplicate string*/
	ptrNew->len = len;/*update length*/
	ptrNew->next = (*head);/*sets new field to head*/
	/* updt head ptr to point to new node*/
	(*head) = ptrNew;

	return (*head);/*ret address of new node*/
}
