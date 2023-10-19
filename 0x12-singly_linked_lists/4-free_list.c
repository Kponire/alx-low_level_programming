#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - function that frees a list_t list
 * @head: function to the structure list_t
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head->next);
	free(head->str);
	free(str);
}
