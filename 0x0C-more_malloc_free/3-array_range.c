#include "main.h"
#include <stdlib>

/**
 * *array_range - creates array
 * @min: min int
 * @max: max int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}
	
	p = malloc(((max - min) + 1) * sizeof(int));
	for (i = min; i <= max; i++)
	{
		p[j] = min;
		min++;
		j++;
	}
	return (p);
}
