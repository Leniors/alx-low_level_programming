#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees list
 * @head: linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head)
	{
		temp = *head;
		*head = *head->next;
		free(temp);
	}
	*head = NULL;
}
