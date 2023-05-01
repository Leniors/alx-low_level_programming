#include "lists.h"

/**
 * listint_len - returns no. of elements
 * @h: linked list
 * Return: no. of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
