#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list
 * @head: pointer to the struct dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
