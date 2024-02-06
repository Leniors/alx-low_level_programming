#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array to search on
 * @size: size of the array
 * @value: value to search for
 * Return: returns an integer
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return -1;
}
