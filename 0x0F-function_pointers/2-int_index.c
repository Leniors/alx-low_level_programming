#include "function_pointres.h"

/**
 * int_index - return index
 * @array: array
 * @size: size
 * @cmp: poiner
 * Return: 0
 */
int int_index(int *array, int size, int (cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
