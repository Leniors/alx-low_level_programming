#include "lists.h"

/**
 * delete_dnodeint_at_index - delete inex
 * @head: head of a linked list
 * @index: index
 * Return: linked list head
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int size = 0;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	current = *head;
	while (current)
	{
		size++;
		current = current->next;
	}
	if (size == 1)
	{
		*head = NULL;
		return (1);
	}
	if (index >= size)
		return (-1);
	while (i < index - 1)
	{
		current = current->next;
		i++;
	}
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);

	return (1);
}
