#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of linked list
 * @index: index
 * Return: head node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int num = 0;
	unsigned int i = 0;

	current = head;
	while (current)
	{
		num++;
		current = current->next;
	}
	if (index >= num)
	{
		return (NULL);
	}
	current = head;
	while (i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
