#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the struct dlistint_t
 * @n: input value
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add, *end;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		add->prev = NULL;
		*head = add;
		return (add);
	}
	end = *head;
	while (end->next != NULL)
		end = tmp->next;
	end->next = add;
	add->prev = end;
	return (add);
}
