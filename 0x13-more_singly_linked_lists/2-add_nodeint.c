#include "lists.h"

/**
 * add_nodeint - adds a node
 * @head: linkedlist
 * @n: integer to be added
 * Return: returns address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t new;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = head;
	head = new;

	return (new);
}
