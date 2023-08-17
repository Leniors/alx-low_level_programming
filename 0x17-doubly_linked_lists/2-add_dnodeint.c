#include "lists.h"

/**
 * add_dnodeint - add node at front
 * @head: head of linked list
 * @n: int
 * Return: linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (*head);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (*head);
}
