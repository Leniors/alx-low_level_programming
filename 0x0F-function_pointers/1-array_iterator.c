#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints each array
 * @array: array
 * @size: elements@action: pointer
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
