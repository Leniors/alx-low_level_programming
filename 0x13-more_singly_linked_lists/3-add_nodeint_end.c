#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds an element
 * @head: linke list
 * @n: integer
 * Retur: address
 */
listint_t *add_nodeint_end(listint_t **hesd, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (*head)
	{
		if (*head->next == NULL)
		{
			new_node-> = *head;
			new_node->next = NULL;
			*head = new_node;
		}
		*head = *head->next;
	}
	return (new_node);
}
