#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - binary search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to search
 * Return: returns index of the value
 */
void loop(int start, int mid, int *array)
{
	int i;
	if (array[mid])
		printf("Searching in array: ");

	for (i = start; i <= mid; i++)
	{
		if (i != mid)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

int binary_search(int *array, size_t size, int value)
{
	int mid;
	int i = 0;
	int x = size - 1;
	
	if (array == NULL)
		return -1;
	
	loop(i, x, array);

	while (i < x)
	{
		mid = i + (int)((x - i) / 2);

		if (array[mid] == value)
		{
			return mid;
		}
		else if (array[mid] < value)
		{
			i = mid + 1;
			loop(i, x, array);
		}
		else
		{
			x = mid - 1;
			loop(i, x, array);
		}
	}

	return -1;
}
