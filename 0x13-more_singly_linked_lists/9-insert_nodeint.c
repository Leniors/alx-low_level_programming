#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts index
 * @head: pointer
 * @idx: next nodde
 * @n: integer
 * Return: returns an address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	current = *head;
	while (current)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			current->n = new->n;
		}
		current = current->next;
		i++;
	}
	return (new);
}
