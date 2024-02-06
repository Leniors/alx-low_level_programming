#include <stdio.h>

/**
 * binary_search - binary search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to search
 * Return: returns index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int mid;

	if (array)
		return -1;
