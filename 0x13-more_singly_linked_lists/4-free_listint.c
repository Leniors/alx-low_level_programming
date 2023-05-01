#include "lists.h"
#include <stdlib.h>

/**
 * @head: linked list
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
