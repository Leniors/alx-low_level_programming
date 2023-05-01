#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums a linked list
 * @head: linked list
 * Return: RETURNS SUM
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
