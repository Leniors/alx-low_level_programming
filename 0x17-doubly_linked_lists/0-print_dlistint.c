#include "lists.h"
#include "stdio.h"

/**
 * print_dlistint - print elements of a linked list
 * @h: head
 * Return: ssize
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size = 0;

	if (current == NULL)
	{
		return (size);
	}
	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		size++;
		current = current->next;
	}
	if (current->next == NULL)
	{
		printf("%d\n", current->n);
		size++;
	}

	return (size);
}
