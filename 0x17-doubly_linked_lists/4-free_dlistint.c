#include "lists.h"

/**
 * free_dlistint - free a linkd list
 * @head: head of a list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *freed;

	current = head;
	while (current)
	{
		freed = current;
		current = current->next;
		free(freed);
	}
}
