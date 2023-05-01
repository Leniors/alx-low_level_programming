#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: linked list
 * @index: index
 * Return: returns
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
