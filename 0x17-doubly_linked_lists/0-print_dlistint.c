#include "lists.h"

/**
 * print_dlistint -function that prints all the elements of a dlistint_t list.
 * @h: pointer to the struct dlistint_t
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
