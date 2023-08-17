#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node
 * @h: head of linked list
 * @idx: index
 * @n: value
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = 0;
	dlistint_t *current = *h;
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	if (*h == NULL)
	{
		*h = temp;
		return (temp);
	}
	if (idx == 0)
	{
		temp->next = *h;
		*h = temp;
		return (temp);
	}
	while (current)
	{
		size++;
		current = current->next;
	}
	if (idx >= size)
		return (NULL);
	current = *h;
	while (i < idx)
	{
		current = current->next;
		i++;
	}
	current->prev->next = temp;
	temp->prev = current->prev;
	current->prev = temp;
	temp->next = current;

	return (temp);
}
