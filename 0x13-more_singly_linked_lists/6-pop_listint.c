#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - returns head
 * @head: linked list
 * Return: returns
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
