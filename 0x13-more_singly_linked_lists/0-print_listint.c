#include "lists.h"

/**
 * print_listint - prints elements
 * @h: linked list
 * Return: returns element
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while(h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}