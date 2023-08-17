#include "lists.h"
#include "stdio.h"

/**
 * print_dlistint - print elements of a linked list
 * @h: head
 * Return: ssize
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size = 0;

	while (current != NULL)
	{
		size++;
		current = current->next;
	}

	return (size);
}
