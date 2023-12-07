#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: double pointer to the struct dlistint_t
 * @n: input value
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->prev = NULL;
	add->next = *head;
	*head = add;
	if (add->next != NULL)
		(add->next)->prev = add;
	return (add);
}
