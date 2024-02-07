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
	int low = 0;
	int high = size - 1;
	
	if (array == NULL)
		return -1;
	
	loop(low, high, array);

	while (low < high)
	{
		mid = low + (int)((high - low) / 2);

		if (low == high)
		{
			return low;
		}
		else if (array[mid] == value)
		{
			return mid;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
			loop(low, high, array);
		}
		else
		{
			high = mid - 1;
			loop(low, high, array);
		}
	}

	return -1;
}
